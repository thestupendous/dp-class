//subsequence using recursion
#include<iostream>
using namespace std;
/*
void printall(s,int l,int r)
{
	if (r==s.length() && l==s.length())
	{
		cout<<s[s.length()-1]<<'\n';
		return;
	}
	if (r==s.length())
	{
		l++;
	}
	if()
	cout<<p<<'\n';
	printall()
}
*/
int subsequence(string,string);
int main()
{
	string s ;
	cin>>s;//= "abc";
	int res=subsequence(s,"");
	cout<<"counted "<<res<<endl;
}

int subsequence(string str, string osf)
{
	if(str.length()==0)
	{
		cout<<osf<<'\n';
		return 1;
	}

	char c = str[0];
	int ans=0;
	string p = str.substr(1);
	ans+=subsequence(p,osf);
	ans+=subsequence(p,osf+c);
	return ans;//subsequence(p,osf+'['+to_string(int(c))+']');
}
