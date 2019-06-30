#include<iostream>
using namespace std;
#include<map>
#include<cmath>
#define un unsigned long long
void primes(int n,bool *check)
{
	int i=2;
	int sq = (int) sqrt(n) ;
	//cout<<"root "<<sq<<endl;
	check[0]=check[1] = 1;
	while(i<sq)
	{
		//cout<<i<<' ';
		for(int j=i;j*i<n;j++)
		{
			check[j*i] = 1;
		}
		i++;
		while(check[i] and i<sq) { i++; }
	}	
	cout<<endl;
}


int main()
{
	int n;
	cin>>n;
	bool check[n+1];
	primes(n+1,check);

	map <int,int> m;
	for(int i=2;i<=n;i++)
	{
		if(!check[i])
		{
			int p=i;
			for(int j=1;p*i<= n;j++)
			{
				m[i] += n/( p);
			}
		}
	}
	un res=1;
	for(auto i=m.begin();i!=m.end();i++)
	{
		cout<<i->first<<' '<<i->second<<endl;
		res *= (i->second + 1);
	}

	cout<<res<<endl;
	return 0;

}
