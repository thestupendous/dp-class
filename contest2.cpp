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
		for(int j=i;j*i<n;j++)
		{
			check[j*i] = 1;
		}
		i++;
		while(check[i] and i<sq)  i++; 
	}
}

int main()
{
	int n;
	cin>>n;
	bool sieve[1000003]={0};
	int  a[1000003]={0};
	primes(1000003,sieve);
    int k=0;
	for(int i=1;i<1000003;i++)
	{
		if(!sieve[i])
        {
            a[++k] = i;
        }
	}
 //   for(int i=0;i<10;i++) cout<<i<<':'<<a[i]<<'\n';
	int p;
     while(n--)
    {
        cin>>p;
        cout<<a[p]<<endl;
    }

	return 0;
}
