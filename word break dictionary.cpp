#include<iostream>
using namespace std;
#include<unordered_map>
bool words(string str,unordered_map<string,bool> &m)
{
	for(int i=1;i<=str.size();i++)
	{
		string pre = str.substr(0,i);
		if(m.find(pre)!=m.end() and words(str.substr(i),m))
		{
			return 1;
		}
	}
	return 0;
}
bool wordbreak(string str, string osf)
{
	if(str.size()==0){
		cout<<osf<<endll;
		return true;
	}
	for(int i=1;i<=str.size();i++)
	{
		string pre = str.substr(0,i);
		if(m.find(prefix)!=m.end() and wordbreak(str.substr(i),osf+prefix+" "))
		{
			return true;
		}
	}
	return 0;
}
bool wordbreakdp(string str,int *dp, string osf)
{
	int n=str.size();
	if(str.size()==0){
		//cout<<osf<<endl;
		return true;
	}
	for(int i=1;i<=str.size();i++)
	{
		string pre = str.substr(0,i);
		if(m.find(prefix)!=m.end() and wordbreak(str.substr(i),osf+prefix+" "))
		{
			dp[n]=1;
			return true;
		}
	}
	return 0;
}
int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	int n;
	cin>>n;
	unordered_map<string,bool> m;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		m[s]=1;
	}

	return 0;
}