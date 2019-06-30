#include<iostream>
using namespace std;
int solution(int n,bool **arr,int **dp)
{

    for(int i=0;i<m;i++)
    {
        dp[0][i]=arr[0][i];
    }
    for(int i=0;i<n;i++)
    {
        dp[i][0]=arr[i][0];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(arr[i][j]==0) dp[i][j]=0;
            else{
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
            }
        }
    }
    int count =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(dp[i][j]>count) count = dp[i][j];
        }
    }
    return count;
}
int main()
{
    int n,m;
    cin>>n>>m;
    bool **a=new bool*[n];
    for(int i=0;i<n;i++) a[i] = new bool[m];

    int **dp = new bool*[n];
    for(int i=0;i<n;i++) dp[i] = new int[m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            dp[i][j]=x

