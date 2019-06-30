#include<iostream>
using namespace std;
#define INT_MIN -9999999
int kadane(int *a,int n)
{
        int cur=0;
        int max=INT_MIN;

        for(int i=0;i<n;i++)
        {
                cur+=a[i];
                if(cur<0) cur=0;
                if(cur>max)
                        max=cur;
        }
        return max;
}

int maxSumSubmatrix(int **a, int n,int m,int k)
{
        int arr[m];
        int max=0;int cur;
        for(int i=0;i<n;i++)
        {
                for(int x=0;x<m;x++)
                {
                        arr[x] = 0;
                }

                for(int j=i;j<n;j++)
                {
                        for(int x=0;x<m;x++)
                        {
                                arr[x] += a[j][x];
                        }
                        cur = kadane(arr,m);
                        if(max<cur) max=cur;
                }
        }
        return max;
}

int main()
{
        int n,m;
        cin>>n>>m;
        int **a = new int*[n];
        for(int i=0;i<n;i++) a[i] = new int[m];

        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];

        cout<< maxSumSubmatrix(a,n,m,0)<<endl;

        return 0;
}
