#include<iostream>
using namespace std;
#define un unsigned long long
un binary(un n,un m,un x,un y)
{
    un ans=-1;
    un l=1;
    un r=n;
    while(l<=r)
    {
        un mid = (l+r)/2;
        if( (n-mid)*y + m  >= mid*x )
        {
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return ans;
}
int main() {
    un n,m,x,y;
    cin>>n>>m>>x>>y;
    
    cout<<binary(1,n,n,m,x,y);
    
	return 0;
}
