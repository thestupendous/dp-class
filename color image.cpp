#include<iostream>
using namespace std;
#include<windows.h>

#define inside(i,j,n,m) ( i>=0 and j>=0 and i<n and j<m )

void print(char **a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
}

void fill(char **a,int i,int j,int n,int m,bool **visited)
{
	if(!inside(i,j,n,m) ) return;
	if( inside(i,j,n,m) and a[i][j]!='#' and !visited[i][j] )
	{
		a[i][j] = (char) 178;
		visited[i][j]=1;
		print(a,n,m);
		//cout << "\033[2J\033[1;1H";
		Sleep(250);
		system("cls");
		fill(a,i+1,j,n,m,visited);
		fill(a,i-1,j,n,m,visited);
		fill(a,i,j+1,n,m,visited);
		fill(a,i,j-1,n,m,visited);
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	char **a = new char*[n];
	for(int i=0;i<n;i++) a[i] = new char[m];

	bool **visited = new bool*[n];
	for(int i=0;i<n;i++) visited[i] = new bool[m];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			visited[i][j]=0;
		}
	}


	fill(a,7,11,n,m,visited);

	print(a,n,m);

	return 0;
}
/*
inputs
15 30
..............................
.............▒▒▒▒▒............
.............▒...▒............
.....▒▒▒▒▒▒▒▒▒...▒▒▒▒▒▒▒......
....▒▒▒.....▒▒▒▒▒▒.....▒▒▒....
...▒▒....................▒▒...
..▒▒......................▒...
..▒▒.....................▒▒...
..▒▒▒...................▒▒....
....▒▒▒................▒▒▒....
......▒▒▒............▒▒▒......
........▒▒▒........▒▒▒........
..........▒▒▒▒▒▒▒▒▒▒..........
..............................
...........A.P.P.L.E..........
*/