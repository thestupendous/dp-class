#include<iostream>
#include<map>
using namespace std;
int fib(int n,map<int,int> &m)
{
    if(n==0 or n==1) return n;
    if(n==2) return 1;
    if(m[n]) { return m[n] ; }      //check if fib(n) is stored in map
    m[n] = fib(n-1,m) + fib(n-2,m); //calculate fib(n) and store in map
    return m[n];
}
int main()
{
    int n;
    cin>>n;
    map <int,int> m;int t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
    cout<<fib(t,m)<<'\n';
    }
    cout<<"printing\n";
    for(auto it : m)
    {
        cout<<(it).first<<' ';
    }
    return 0;
}
