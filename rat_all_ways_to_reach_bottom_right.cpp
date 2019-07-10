/*
	given a matrix of order n by m
	we have to find all the number of ways
	through which we can reach the bottom right corner
	from the top left corner,
	provided that there will be some obstacles.
	Thus, the motion will be possible in all four directions.
	The results can be many. All the results will
	be printed in the fashion 
		U - Upwards
		D - Downwards
		R - Right
		L - Left
	Outputs will be a string containing movements Letters
	(U/D/R/L) for all such possible ways.
*/
#include<iostream>
using namespace std;

void print(char **a,int n,int m)
{
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<'[';
		for (int j = 0; j < m; ++j)
		{
			/* code */
			cout<<a[i][j]<<' ';
		}
		cout<<"]\n";
	}
}

#define inside(i,j,n,m) ( i<=n and j<=m and i>=0 and j>=0 )

void findWays(char **a,int i,int j,int n,int m,bool **visited,string out)
{
	if(!inside(i,j,n,m)) return;
	if(i==n and j==m) {
		cout<<out<<'\n';
		return;
	}

	if(visited[i][j] or a[i][j]=='#') return;

	visited[i][j]=1;
	findWays(a,i+1,j,n,m,visited,out+"D");
	findWays(a,i-1,j,n,m,visited,out+"U");
	findWays(a,i,j+1,n,m,visited,out+"R");
	findWays(a,i,j-1,n,m,visited,out+"L");
	visited[i][j]=0;
}

int main()
{
	int n,m;
	cin>>n>>m;

	char **a = new char*[n];
	bool **vis = new bool*[n];
	for(int i=0;i<n;i++)
	{
		*(a+i) = new char[m];
		*(vis+i) = new bool[m];
	}

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			vis[i][j]=0;
			cin>>a[i][j];
		}
	print(a,n,m);
	findWays(a,0,0,n-1,m-1,vis,"");

	return 0;
}
/*

ultimate testcase

7 9
0 # 0 0 0 0 0 0 0
0 # 0 # # # # # 0
0 # 0 # 0 0 0 # 0
0 # 0 # 0 # 0 # 0
0 # 0 0 0 # 0 # 0
0 # # # # # 0 # 0
0 0 0 0 0 0 0 # 0

*/