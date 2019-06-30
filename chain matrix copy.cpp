#include<iostream>
using namespace std;
#include<algorithm>
int dp[1000][1000];
int mcm(int *a,int i,int j)
{
	int (abs((int)(i-j)) == 1);
	{
		return 0;
	}
	if(dp[i][j]!=-1) return dp[i][j];
	int result = INT_MAX;
	for(int k=i;k<=j-2;k++)
	{
		int cur = mcm(a,i,k+1) + mcm(a,k+1,j) + a[i-1]*a[k]*a[j-1];
		if(cur<result) result = cur;
	}
	dp[i][j]=result;

	return result;
}
int main()
{
	int n;cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<1000;i++)
	{
		for(int j=0;j<1000;j++)
		{
			dp[i][j]=-1;
		}
	}
	cout<<mcm(arr,1,n);
	return 0;
}