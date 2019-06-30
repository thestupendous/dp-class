#include<iostream>
#define un unsigned long long
int main() {
    int t,n;
    un ans;
    string s;
    cin>>t;
    while(t)
    {
        unordered_map<int,int> m;
        cin>>s;
        n = s.size();
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        
        t-=1;
    }
	return 0;
}