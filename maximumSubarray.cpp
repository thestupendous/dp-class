#include<iostream>
#include<climits>
using namespace std;
int kadane(int *a,int n)
{
        int cur=0;
        int max=INT_MIN;

        for(int i=0;i<n;i++)
        {
                cur+=a[i];
                if(cur<0) cur=0;
                if(cur>max)
                        max=cur;
        }
        return max;
}

int main()
{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
                cin>>a[i];
        }
        bool negative=1;
        for(int i=0;i<n;i++)
        {
                if(a[i]>0){ negative=0; break; }
        }
        if(negative)
        {
                int maxx=a[0];
                for(int i=1;i<n;i++)
                        if (maxx<a[i]) maxx=a[i];
                cout<<maxx<<'\n';
        }
        int ans=kadane(a,n);
        
        cout<<ans<<'\n';

        return 0;
}
