//fermat little theorem
#include<iostream>
using namespace std;
#define un unsigned long long

un atobmodm(un a,un b, un c)
{
	un val=a%c,res=1;
	while(b)
	{
		if(b&1)
		{
			res = (res* val)%c;
		}
		val = (val*val) % c;
		b=b>>1;
	}
	return res;
}

un inverse(int num, int mod)
{
	return atobmodm(a,(p-2)%,p);
}


int main()
{
	un num,mod,inverse;
	cin>>num>>mod;
	inverse = inv(num,mod);
	cout<<inverse<<'\n';


	return 0;
}