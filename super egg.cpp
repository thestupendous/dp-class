#include<iostream>
using namespace std;
#include<climits>

int break_eggs(int n,int k)
{
	int dp[n+1][k+1];
	for(int i=0;i<=k;i++)
	{
		dp[0][i]=0;
		dp[1][i]=i;
	}

	for(int i=0;i<=n;i++)
	{
		dp[i][0]=0;
		dp[i][1]=i;
	}

	for(int i=0;i<=n;i++)
	{
		dp[i][1]=1;
	}
	for(int i=2;i<n;i++)
	{
		for(int j=2;j<=k;j++)
		{
			dp[i][j]=INT_MAX;
			for(int x=1;x<j;x++)
			{
				int result = 1+max(dp[i-1][x-1],dp[i][j-x]);
				if(result <dp[i][j])
				{
					dp[i][j]=result;
				}
			}
		}
	}
	return dp[n][k];

}

int main()
{
	cout<<break_eggs(5,10000);
	return 0;
}
