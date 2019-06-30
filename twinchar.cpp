#include<iostream>
using namespace std;
int main() {


    string s;
    cin>>s;
    //char prev=a[0]
    int count=0;
    int k=0;
    for(int i=0;i<s.length()-2;i+=2)
    {
        if(s[i]==s[i+2]) count++;
    }
    for(int i=1;i<s.length()-2;i+=2)
    {
        if(s[i]==s[i+2]) count++;
    }
    cout<<count<<'\n';
	return 0;
}
