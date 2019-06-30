//print first n numbers in lexicographical order using recursion
#include<iostream>
using namespace std;
#define u unsigned long long
void print2(int n,int k)
{
    if(k>n) return;
    cout<<k<<' ';
    for(int i=0;i<10;i++)
    {
        print2(n,k*10+i);
    }
}
void printinOrder(int n)
{
    for(int i=1;i<10;i++)
    {
        print2(n,i);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<"0 ";
    printinOrder(n);
    return 0;
}
