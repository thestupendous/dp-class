//0 1 knapsack
#include<iostream>
using namespace std;
#include<algorithm>

struct knapsack
{
	int val;
	int wei;
};

bool cmp(knapsack a,knapsack b)
{
	return ( a.val*b.wei <= a.wei*b.val ) ;
}


int grab(knapsack *knap,int size, int n)
{
	int dp[n+1][size+1];
	for(int i=0;i<=size;i++) dp[0][i]=0;
	for(int i=0;i<=n;i++) dp[i][0]=0;

	for(int i=1;i<=size;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int notake= dp[i-1][j];
			int take = (knap[i-1].wei<=j)? knap[i-1].val + dp[i-1][j-knap[i-1].wei]: dp[i-1][j];
			dp[i][j] = max(notake,take); 
		}
	}
	return dp[n][size];

}

int main()
{
	int n;
	cin>>n;
	int capacity;
	cin>>capacity;

	knapsack *knap = new knapsack[n];

	for(int i=0;i<n;i++) cin>>knap[i].wei;
	for(int i=0;i<n;i++) cin>>knap[i].val;

	sort(knap,knap+n,cmp);
	//for(int i=0;i<n;i++) cout<<knap[i].val<<' '<<knap[i].wei<<'\n';
	cout<<grab(knap,capacity,n);
	return 0;
}