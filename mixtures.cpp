#include<iostream>
using namespace std;
#include<algorithm>
int sum(int *a,int i,int j)
{
	int ans = 0;
	for(int k=i;k<=j;k++)
	{
		ans = ( (ans%100) + (a[k]%100) ) %100;
	}
	return ans;
}

int mix(int *a,int i,int j)
{
	if(i==j) return 0;
	if(abs((int) (i-j) ))return (a[i]*a[j]);
	int ans = INT_MAX,cur;
	for(int k=i+1;k<=j;k++)
	{
		cur = mix(a,i,k-1) + mix(a,k,j) + ( sum(a,i,k-1)*sum(a,k,j)) ;
		if(cur<ans) ans = cur;
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[n];

	cout<<mix(a,0,n-1);
	
	return 0;
}