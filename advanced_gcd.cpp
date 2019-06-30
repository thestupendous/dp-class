//advanced gcd where integers are beyond 20 digits, which can not be stored as integers, strings to be used.
#include<iostream>
using namespace std;
#define un unsigned long long

un mod(string a,int b)
{
	if(a.size()==1) { return ( (a[0]-'0') % b); }
	un m=((a[0]-'0') * 10 )%b;
	for(int i=1;i<a.size();i++)
	{
		m *= 10;
		m += (a[i]-'0') ;
		m %= b;
	}
	return m;
}

un ad_gcd(un a,un b)
{
	if(a>b) swap(a,b);
	if(b%a==0) return a;
	return ad_gcd(b%a,a);
}

int main()
{
	un a;string b;
	cin>>b>>a;
	//cout<<mod(b,a)<<endl;
	if(!mod(b,a))
	{
		cout<<a<<'\n';
		return 0;
	}
	cout<< ad_gcd(mod(b,a),a) << '\n';

	return 0;
}