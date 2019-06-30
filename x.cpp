#include<iostream>
using namespace std;

void permutations(string str,string osf)
{
	if(str.size()==0)
	{
		cout<<osf<<endl;
		return;
	}

	unordered_map<char,char> mp;
	for(int i=0;i<str.size();i++)
	{
		if(mp.find(str[i]) == mp.end())
		{
			char ch = str[i];
			string ros = str.substr(0,i)+str.substr(i+1);
			mp[ch] = ch;
			permutations(ros,osf+ch);

