#include<iostream>
#include<string>
using namespace std;



int subs(string str,string out)
{
    if(str.length()==0)
    {
        cout<<out<<' ';
        return 1;
    }
    return subs(str.substr(1),out) + subs(str.substr(1),out+str[0]) + subs(str.substr(1),out+to_string(int(str[0])) );

}

int main()
{
    string s;
    cin>>s;
    //s="abcde";
    int res=subs(s,"");
    cout<<'\n'<<res;

    return 0;
}
