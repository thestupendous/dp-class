#include<iostream>
using namespace std;
int rope(int n)
{
	if(n==0 or n==1 or n==2 or n==3) return n;
	int result=0;
	for(int i=1;i<n/2;i++)
	{
		result = max(result,i*rope(n-1));
	}
	return result;
}

int main()
{	int n;
	cin>>n;
	cout<<rope(n)<<'\n';

	return 0;
}