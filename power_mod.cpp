//calculating ( (a.toThePower(b)) % m )
//jhandu tarika
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

int main()
{
	un a, b, md;
	cin>>a>>b>>md;
	cout<<atobmodm(a,b,md)<<endl;

	return 0;
}

