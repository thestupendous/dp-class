#include<iostream>
using namespace std;
inline bool inside(int n,int i,int j)
{
    return (i>=0 and j>=0 and i<=n and j<=n);
}
inline bool valid (bool **a,int n,int i,int j)
{
    if (!inside(n,i,j)) return 0;
    if(a[i][j]) return 0;
    for(int p=0;p<n;p++) if(a[i][p]) return 0;
    for(int p=0;p<n;p++) if(a[p][j]) return 0;
    if(inside(n,i-1,j-1))    if(a[-1][j-1]) return 0;
    if(inside(n,i-1,j))   if(a[i-1][j]) return 0;
    if(inside(n,i-1,j+1))    if(a[i-1][j+1]) return 0;
    if(inside(n,i,j-1))   if(a[i][j-1]) return 0;
    if(inside(n,i,j+1)) if(a[i][j+1]) return 0;
    if(inside(n,i+1,j-1)) if(a[i+1][j-1]) return 0;
    if(inside(n,i+1,j)) if(a[i+1][j]) return 0;
    if(inside(n,i+1,j+1)) if(a[i+1][j+1]) return 0;
    return 1;
}
int kings(bool **a,int n,int i, int j)
{cout<<"entered "<<i<<' '<<j<<'\n';
    if(!valid(a,n,i,j))
    {
        return 0;
    }
    if(i==n and j==n) return 1;
    a[i][j]=1;
    cout<<" marked at "<<i<<' '<<j<<"\n";
    int res=0;
    for(int p=0;p<n;p++)
    {
        if(valid(a,n,i+1,p))
        {
            res+=kings(a,n,i+1,p);

    return res;
}
int main() {
    int n=3;
    bool **a = new bool*[n];
    for(int i=0;i<n;i++) a[i] = new bool[n];
    for(int i=0;i<n;i++) for (int j=0;j<n;j++) a[i][j]=0;
    cout<<"printing table \n";
    for(int i=0;i<n;i++) { for (int j=0;j<n;j++) cout<<a[i][j]<<' '; cout<<'\n'; }

    cout<< kings(a,n-1,0,0) ;
    return 0;
}
