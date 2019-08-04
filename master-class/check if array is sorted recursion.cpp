#include<iostream>
using namespace std;

bool check(int *a,int i,int n)
{
	if(i==n) return 1;
	if(a[i]<a[i-1]) return 0;
	else
		return check(a,i+1,n);
}

int main()
{
	int n,*a;
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++) cin>>a[i];

	cout<<check(a,1,n)<<'\n';
	
	return 0;
}