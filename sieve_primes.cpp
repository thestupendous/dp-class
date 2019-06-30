//
#include<iostream>
#include<cmath>
using namespace std;

void primes(int n,bool *check)
{
	int i=2;
	int sq = (int) sqrt(n) ;
	check[0]=check[1] = 1;
	while(i<sq)
	{
		//cout<<i<<' ';
		for(int j=i;j*i<n;j++)
		{
			check[j*i] = 1;
		}
		i++;
		while(check[i] and i<sq) {  i++; }
	}
	//cout<<endl;
	/*
	for(int j=0;j<n;j++)
	{
		if(!check[j]) cout<<j<<' ';
	}
	*/
	//cout<<endl;
}

int main()
{
	int n;
	n=5000003;
	bool sieve[5000003]={0};
	int  count[5000003]={0};
	primes(n,sieve);
	int k=0;
	for(int i=1;i<5000003;i++)
	{
		if(!sieve[i])
			count[++k] = i;
	}
	
	cin>>n;
	cout<<count[n];

	return 0;
}