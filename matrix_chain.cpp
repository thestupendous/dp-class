// determine in which order multiple matrices should be multiplied

#include<iostream>
using namespace std;
int order(int *x,int n,int i,int j)
{
	if(j-i==1) return 0;
	if(j-i==2) return(x[i]*x[i+1]*x[j]);
	int ans=INT_MAX,cur;
	for(int k=i;k<=j-1;k++)
	{
		cur = order(x,n,i+1,k+1) + x[i-1]*x[k]*x[j] + order(x,n,k+1,j);
		if(cur<ans)
			ans=cur;
	}
	return ans;
}


int main()
{
	int n;
	cin>>n;
	int x[n+1];
	for(int i=0;i<=n;i++)
	{
		cin>>x[i];
	}
	cout<<order(x,n,1,n-1);

	return 0;
}
	