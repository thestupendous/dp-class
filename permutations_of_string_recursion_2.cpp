#include<iostream>
using namespace std;

void permutations(string str,string osf)
{
	if(str.size()==0) 
	{
		cout<<osf<<'\n';
		return;
	}
	for(int i=0;i<str.size();i++)
	{
		//if(i+1<str.size())
		permutations(str.substr(0,i)+str.substr(i+1),osf+str[i]);
	}
}


int main()
{
	string s;
	cin>>s;
	
	
	permutations(s,"");
}
