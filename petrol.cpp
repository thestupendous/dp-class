#include<iostream>
using namespace std;
#define un unsigned long long
int main()
{   un t,n,*cost,*psum;
    un x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        cost = new un[n];
        psum = new un[n];
        for(int i=0;i<n;i++)
        {
            cin>>cost[i];
            if(i>0) psum[i]=cost[i]+psum[i-1];
            else psum[0]=cost[0];
        }
        bool f=1;
        for(int i=0;i<n and f;i++)
        {
            for(int j=0;j<n and f;j++)
            {
                if(psum[j]-psum[i] == x)
                {
                    cout<<"YES\n";
                    f=0;
                }
            }
        }
        if(f)
        cout<<"NO\n";
    }
return 0;
}
