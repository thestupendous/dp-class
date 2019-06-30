//cut the rope
#include<iostream>
using namespace std;
#include<unordered_map>
#define un unsigned long long

//int max(un a,un b) {return (a>b)?a:b;}

un cut(int n,unordered_map<int,un> &m)
{	
	//cout<<"   entered "<<n<<'\n';
	if(n==1) return 1;
	if(n==2 or n==3) return n;
	if(m[n]>0) return m[n];
	un ans=0;
	for(int i=1;i<=n/2;i++)
	{
		//cout<<"doing for "<<i<<' '<<n-i<<'\n';
		ans = max(ans,cut(i,m)*cut(n-i,m));
	}
	m[n]=ans;
	return ans;
}

int main()
{
	un n;
	cin>>n;
	unordered_map<int,un> m;
	cout<<cut(n,m)<<'\n';
}