#include<iostream>
using namespace std;
#include<map>
int pairs(int n,map<int,int> &m)
{
    if(n==0) return 1;
    if(n==1 or n==2) return n;
    if(m[n]>0) return m[n];
    m[n] = (pairs(n-1,m) + (n-1)*pairs(n-2,m));
    return m[n];
}

int main() {
    int t,n;
    cin>>t;
    map<int,int> m;
    while(t--)
    {
        cin>>n;
        cout<<pairs(n,m)<<'\n';
    }
    cout<<m.size()<<'\n';
	return 0;
}
