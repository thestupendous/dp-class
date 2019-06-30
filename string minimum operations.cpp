#include <iostream>
#include <string>
using namespace std;
int abss(int x) {if(x>0) return x;  return -x; }
int min(int a,int b){if (a<b) return a; return b; }
int count(string a,string b)
{
    if(a.size()==0 or b.size()==0) { return (unsigned)abss(a.size()-b.size()) ; }
    int ans=0,a1,a2,a3;
    if(a[0]==b[0]) {
        ans = count(a.substr(1),b.substr(1));
    }
    else
    {
        a1 = 1+count(a.substr(1),b.substr(1));
        a2 = 1+count(a.substr(1),b);
        a3 = 1+count(a,b.substr(1));
        ans = min(a1,(min(a2,a3)));
    }
    
    return ans;
}
int main()
{
  string a,b;
  cin>>a>>b;
  cout<<count(a,b)<<endl;
  
}
