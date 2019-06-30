//print keypad (of feature phone) combinations of different words for which a number is pressed.
#include<iostream>
#include<map>
using namespace std;
#define us unsigned short

void printMessages(string no,string res,map<us,string> m)
{
    //cout<<"\t got string: "<<no<<'\n';
    if(no.length()==0) {
            cout<<res<<'\n';
            res="";
            return;
    }

    us digit = (us) no[0]-'0';
    for(int i=0;i<m[digit].length();i++)
    {
        res+=m[digit][i];
        printMessages(no.substr(1),res,m);
    }
}



int main()
{
    map<us,string> m;
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxy";

    int n = 2323;
    string no=to_string(n);
    printMessages(no,"",m);

    return 0;
}

