
#include <iostream>
#include<algorithm>
#define un unsigned long long
using namespace std;
bool valid(un *a,int n,int ans,int no_of_cows)
{
    un last_pos = a[0];
    int current_cows=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]-last_pos >= ans)
        {
            current_cows++;
            last_pos = a[i];
        }
        if(current_cows == no_of_cows){
            return 1;
        }
    }
    if(current_cows==no_of_cows) return 1;
    else return 0;
}
int main() {
    int t,n,c;
    un *a;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        a = new un[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        un ans=0;
        int start = a[0];
        int end=a[n-1];
        while(start<=n)
        {
            int mid = (start+end)/2;
            if(valid(a,n,mid,c)){
                ans = mid;
                start = mid+1;
            } else {
                end = mid-1;
            }

        }
        cout<<ans<<'\n';

    }
}

