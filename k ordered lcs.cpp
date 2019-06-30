// Example program
#include <iostream>
#include <string>

int ko(int n,int m,int *arr1,int *arr2,int k, int i,int j)
{
    if(i==n or j==m)
    {
        return 0;
    }
    if(dp[i][j][k] !=-1 ) return dp[i][j][k];
    
    int ans;
    if(arr1[i]==arr2[j])
    {
        ans = ko(n,m,arr1,arr2,k,i+1,j+1);
        dp[i][j][k]=ans;
        return ans;
    } else
    {
        int a1 = ko(n,m,arr1,arr2,kk,i+1,j);
        int a2 = ko(n,m,arr1,arr2,kk,i,j+1);
        int a3 = -1;
        if(k>0) {
            a3 = ko(n,m,arr,arr2,k-1,i+1,j+1);
        }
        ans = max(a1,max(a2,a3));
        d[i][j][k]=ans;
        return ans;
    }
}

int main()
{
    
    
}
