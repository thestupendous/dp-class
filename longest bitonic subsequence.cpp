//longest bitonic subsequence
#include<iostream>
using namespace std;

int lbs(int n,int *arr)
{
	int dp[n],dp2[n],ans[n];
	for(int i=0;i<n;i++) {dp[i]=dp2[i]=1;}
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j])
            {
                dp[i] = max(dp[i],1+dp[j]);
            }
        }
    }

    for(int i=n-2;i>-1;--i)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                dp2[i] = max(dp2[i],1+dp2[j]);
            }
        }
    }

    for(int i=0;i<n;i++) ans[i] = dp[i]*dp2[i]-1;
    

    int result=1;
    for(int i=0;i<n;i++)
    {
        if(ans[i]>result) result=ans[i];
    }
    return result;
}

int main()
{
	int n; n=6;
	int a[]={3,2,1,4,5,2};
	cout<<lbs(6,a);

	return 0;
}