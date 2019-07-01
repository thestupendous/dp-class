/*
 * finds the longest common subsequence between two strings
 * using dynamic programming
 */
	#include<iostream>
	using namespace std;
	int dp[104][104];
	int lcs(string s1,string s2)
	{

		if(s1.size()==0 or s2.size()==0) return 0;
		if(dp[s1.size()][s2.size()]!=-1) return dp[s1.size()][s2.size()];
		
		int ans=0;
		if(s1[0]==s2[0])
		{
			ans= 1+lcs(s1.substr(1),s2.substr(1));
		}
		else
		{
			ans= max(lcs(s1,s2.substr(1)),lcs(s1.substr(1),s2));
		}
		dp[s1.size()][s2.size()] = ans;
		return ans;
		
	}
	int main()
	{
		string sa,sb;
		cin>>sa>>sb;
		for(int i=0;i<100;i++) for(int j=0;j<100;j++) dp[i][j]=-1;
		cout<<lcs(sa,sb)<<'\n';

		return 0;
	}
