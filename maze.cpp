#include<iostream>
//#include<vector>
using namespace std;
inline bool inside(int i,int j,int n)
{
    return ( i<=n and j<=n and i>=0 and j>=0 );
}
inline bool onDiagonal(int i,int j,int n)
{
    return ( i==j or i+j == n);
}
int maze(int i,int j,int n,string s){
    if(!inside(i,j,n)) return 0;
    if(i==n and j==n) { cout<<s<<' '; return 1;}
    
    return ( maze(i+1,j,n,s+"V") + maze(i,j+1,n,s+"H") + ( (onDiagonal(i,j,n) )?maze(i+1,j+1,n,s+"D"):0 ) );
    
}

int main() {
    int n;
    cin>>n;
    //n=3;
    //vector<string> v;
    int ans=maze(0,0,n-1,"");
    //for(unsigned int i=0;i<v.size();i++) cout<<v[i]<<' ';
    cout<<endl<<ans;
    return 0;
}
