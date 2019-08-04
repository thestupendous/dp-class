#include<iostream>
#include<map>
using namespace std;

int main()
{
	int n;
	int t;
	map<int,int> m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		++m[t];
	}
	for(auto i = m.begin();i!=m.end();i++)
	{
		if(i->second==1) cout<<i->first<<' ';
	}
	cout<<endl;

	return 0;
}
	
