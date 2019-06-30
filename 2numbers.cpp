//number of numbers before a given number n, which have exactly three divisors
#include<iostream>
#include<cmath>
using namespace std;

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
	int sq=(int) sqrt(n);
	
	bool found[sq]={0};
	primes(sq,found);

	for(int i=0;i<sq;i++)
		if(!found[i]) cout<<i*i<<' ';

	return 0;
}