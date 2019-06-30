#include<iostream>
using namespace std;

int pairs(int n)
{
    if(n==0) return 1;
    if(n==1 or n==2) return n;
    return (pairs(n-1) + (n-1)*pairs(n-2));
}

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<pairs(n)<<'\n';
    }
	return 0;
}
