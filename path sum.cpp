//top-left to bottom-right calculating sum each time
#include<iostream>
using namespace std;

int findSum(int **a,int m,int n)
{
	int d[m][n];d[0][0]=a[0][0];
	for(int i=1;i<m;i++)
	{
		d[i][0]=d[i-1][0]+a[i][0];
	}
	for(int j=1;j<n;j++)
	{
		d[0][j]=d[0][j-1]+a[0][j];
	}

	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			d[i][j] = a[i][j]+ ((d[i-1][j]<d[i][j-1])?d[i-1][j]:d[i][j-1] ) ;
		}
	}

	return d[m-1][n-1];
}

int main()
{
	int n,m;
	cin>>m>>n;
	int **a = new int*[m];
	for(int i=0;i<m;i++) a[i] = new int[n];

    for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>a[i][j];
	cout<<findSum(a,m,n)<<endl;

	return 0;
}

