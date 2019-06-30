#include<iostream>
#include<utility>
#include<algorithm>
#define un long long
using namespace std;
bool cmp(pair<un,un> a,pair<un,un> b)
{
    if(a.first<b.first)
        return true;
    if(a.first>b.first)
        return false;
    return (a.second<=b.second);
}
int main() {
    un n,a,b;
    cin>>n;
    pair<un,un> p[n];
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        p[i] = {a-b,a+b};
    }
    sort(p,p+n,cmp);

    for(int i=0;i<n;i++)
    {

    }
	return 0;
}
