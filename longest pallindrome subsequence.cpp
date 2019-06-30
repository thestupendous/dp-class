#include<iostream>
#include<cstring>
using namespace std;
int lps(string s)
{
	int dm[s.size()][s.size()];
	memset(dm,0,sizeof(dm));
	int n=s.size();

	for(int i=0;i<s.size();i++)	dm[i][i]=1;

	for(int l=2;l<=s.size();l++)
	{
		for(int i=0;i<=n-l;i++)
		{
			int j=i+l-1;
			if(s[i]==s[j] and l==2)	dm[i][j]=2;
			else if(s[i]==s[j])		dm[i][j]=dm[i+1][j-1]+2;
			else					dm[i][j]=max(dm[i+1][j],dm[i][j-1]);
		}
	}

	return dm[0][n-1];
}
int main()
{
	string s;
	cin>>s;
	cout<<lps(s)<<'\n';
}