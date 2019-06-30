#include<iostream>
using namespace std;
#include<unordered_map>
#define un unsigned long long
int main()
{
    un n,t;
    cin>>n;
    unordered_map<un , un> m;
    un ans=0;
    for(un i=0;i<n;i++)
    {
        cin>>t;
        if(t==0) {ans+=1;continue;}
        if(m.find(t)==m.end()){  ans+=1+t;  m[t]=0; }
        
        else 
        {
            m[t]++;
            if(m[t]==t)
            {
                m.erase(t);
            }
        }
        //m[t] ++;
        
    }
    
    cout<<ans;
}