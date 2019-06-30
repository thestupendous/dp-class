#include<iostream>
using namespace std;
#include<vector>
bool match(int *a,int *b)
{
        for(int i=0;i<26;i++) if(a[i]!=b[i]) return 0;
        return 1;
}
int main()
{
	string sa,sb;
        vector<int> res;
        cin>>sa>>sb;
        int hb[26]={0};
        int ha[26]={0};
        for(int i=0;i<sb.size();i++)
        {
                hb[sb[i]-'a'] ++;
        }
        for(int i=0;i<sb.size();i++)
        {
                ha[sa[i]-'a'] ++;
        }

        if(match(ha,hb)) res.push_back(i);
        
        for(int i=1;i<sb.size()-sa.size();i++)
        {
             ha[sa[i]-1]--;
             ha[sa[i+sa.size()]]++;
             if(match(ha,hb)){
                     res.push_back(i);

        }

        for(int i=0;i<res.size();i++)
                cout<<res[i]<<' ';
        cout<<endl;

       return 0;
} 

        

	
