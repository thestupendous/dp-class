#include<iostream>
using namespace std;
int lrs(string str)
{
	int **dp = new int*[str.size()+1];
	for(int i=0;i<str.size()+1;i++)
	{
		dp[i]=new int[str.size()];

	}
	for(int i=0;i<str.size()+1;i++)
	{
		dp[0][i]=0;
		dp[i][0]=0;
	}
	for(int i=1;i<str.size()+1;i++)
	{
		for(int j=1;j<str.size()+1;j++)
		{
			if(str[i-1]  == str[j-1] and i!=j)
			{
				dp[i][j] = 1+dp[i-1][j-1];
			} else {
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}

		}
	}
	return dp[str.size()][str.size()];
}

int main()
{
	string s;
	cin>>s;

	cout<<lrs(s)<<'\n';

	return 0;
}