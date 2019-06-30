//
#include<iostream>
#include<cmath>
using namespace std;

void primes(int n,bool *check)
{
	int i=2;
	int sq = (int) sqrt(n) ;
	check[0]=check[1] = 1;
	while(i*i<n)
	{
		if(check[i]==0){
			for(int j=i;j*i<n;j++)
			{
				check[j*i] = 1;
			}
		}
		i++;
	}

	for(int j=0;j<n;j++)
	{
		if(!check[j]) cout<<j<<' ';
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;

	bool sieve[n]={0};

	primes(n,sieve);

	return 0;
}