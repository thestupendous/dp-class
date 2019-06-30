#include<iostream>
#include<cmath>
using namespace std;
#define un unsigned long long

int main()
{
	un n;
	cin>>n;
	un oth,hyp;
	if(n%2!=0)
	{
		oth = (n*n -1 )/2;
		hyp = ( 2*n*n +2 ) / 4;
	}
	else
	{
		oth = (n*n-4)/4;
		hyp = (n*n+4)/4;
	}

	if(n<oth) cout<<n<<' '<<oth<<' ';
	else cout<<oth<<' '<<n<<' ';
	cout<<hyp<<'\n';

	return 0;
}