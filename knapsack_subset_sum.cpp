//subset
#include<iostream>
using namespace std;

bool targetSubset(int *arr,int n,int tw)
{
	bool dp[n+1][tw+1];
	for(int i=0;i<tw;i++)
	{
		dp[0][1]=0;
	}
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=false;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=tw;j++)
		{
			if(arr[i-1]>j)
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j] = dp[i-1][j] or dp[i-1][j-arr[i-1]];
			}
		}
	}
	return dp[n][tw];
}

int main()
{
	int n,c;
	cin>>n>>c;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<targetSubset(arr,n,c);
	cout<<endl;
}