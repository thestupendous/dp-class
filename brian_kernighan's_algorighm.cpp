//brian kernighan's algorithm counts the number of set bits in a number
#include<iostream>
using namespace std;
#define X long long

int main()
{
	X n;
	cin>>n;
	int count=0;
	while(n)
	{
		if(n&n-1)
			count++;
		n = n & n-1;
	}
	cout<<count+1<<'\n';

	return 0;
}