#include<iostream>
//#include<string>
using namespace std;
int main() {
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            s = s.substr(0,i) + '*' + s.substr(i);
        }
    }
    cout<<s<<'\n';
	return 0;
}
