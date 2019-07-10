#include<iostream>
using namespace std;
bool notOutside(int i,int j,int n,int m)
{
	return i>=0 and j>=0 and i<n and j<m;
}
int zz=0;
int findWays(int n,int m,int cur_row,int cur_col,char **a,bool **visited)
{
	cout<<"entered - "<<cur_row<<' '<<cur_col<<"\n";
	zz++;
	if(!notOutside(cur_row,cur_col,n,m)) return 0;
	if(cur_row>n or cur_col>m or a[cur_row][cur_col]=='1' or visited[cur_row][cur_col])
	{
		cout<<"  returning failed!\n";
		return 0;
	}
	if(cur_row==n and cur_col==m)
	{
		cout<<"\treturning having found.\n";
		return 1;
	}

	visited[cur_row][cur_col]=1;
	int x =0;
	if(notOutside(cur_row-1,cur_col,n,m))
	{
		cout<<" up\n";
       		x+=findWays(n,m,cur_row-1,cur_col,a,visited);
	}
	if(notOutside(cur_row,cur_col+1,n,m))
	{
		cout<<" right\n";
		x+=findWays(n,m,cur_row,cur_col+1,a,visited);
	}
	if(notOutside(cur_row+1,cur_col,n,m))
	{
		cout<<" down\n";
		x+=findWays(n,m,cur_row+1,cur_col,a,visited);
	}
	if(notOutside(cur_row,cur_col-1,n,m))
	{
		cout<<" left\n";
		x+=findWays(n,m,cur_row,cur_col-1,a,visited);
	}
	visited[cur_row][cur_col]=0;

	return x;
}



int main()
{
	int n,m;
	n = 3;m=4;
	cin>>n;
	m=n;

	char **a = new char*[n];
	for(int i=0;i<n;i++){ a[i] = new char[m]; }
	
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];

	bool **visited = new bool*[n];
	for(int i=0;i<n;i++){ visited[i] = new bool[m]; }

	for(int i=0;i<n;i++) for(int j=0;j<m;j++) visited[i][j]=0;

	cout<<findWays(n,m,0,0,a,visited);
	cout<<"and zz = "<<zz<<'\n';
	return 0;
//sdkfdkf
}	

	


