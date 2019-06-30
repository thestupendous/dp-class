#include<iostream>
#include<map>
#include<utility>
using namespace std;
int mins(int a,int b,int c)
{
    int k=a; k = (k<b)?k:b; k=(k<c)?k:c;
    return k;
}
int findMat(bool **a,int i,int j,int n,int m,map<pair<int,int>,int> &dm)
{
    if(!a[i][j]) return 0;
    if(i>=n or j>=m) return 0;
    if(dm[{i,j}] !=-1 ) return dm[{i,j}];
    if((i==n-1 or j==m-1 ) and a[i][j]) return 1;
    int a1=findMat(a,i+1,j,n,m,dm);
    int a2=findMat(a,i,j+1,n,m,dm);
    int a3=findMat(a,i+1,j+1,n,m,dm);
    int ans = 1+ mins(a1,a2,a3);
    dm[{i,j}]=ans;
    return ans;

}
int main()
{
    int n,m;
    bool **a;
    cin>>n>>m;
    a = new bool*[n];
    for(int i=0;i<n;i++) a[i] = new bool[m];

    map<pair<int,int>,int> dm;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            dm[{i,j}] = -1;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) dm[{i,n}]=a[i][n];
    for(int i=0;i<m;i++) dm[{m,i}]=a[m][i];

    cout<<findMat(a,0,0,n,m,dm);


    return 0;
}
