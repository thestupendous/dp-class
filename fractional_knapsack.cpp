//fractional knapsack
#include<iostream>
#include<algorithm>
using namespace std;
struct knap
{
    int val;
    int wei;
};
bool cmp(knap a,knap b)
{
    return( a.val * b.wei > b.val * a.wei );
}
void print(knap *kn,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<kn[i].val<<' '<<kn[i].wei<<'\n';
    }
}
int main()
{
    int cap;
    int n;
    cin>>n>>cap;
    knap *kn = new knap[n];
    for(int i=0;i<n;i++)
    {
        cin>>kn[i].val;
    }
    for(int i=0;i<n;i++)
    {
        cin>>kn[i].wei;
    }

    sort(kn,kn+n,cmp);
    print(kn,n);

    double sum=0;
    //for(int i=0;i<n;i++) cout<<order[i]<<' '; cout<<'\n';
    for(int i=0;i<n and cap>0;i++)
    {
        if(kn[i].wei <= cap)
        {
            cout<<"added "<<kn[i].val;
            sum+=kn[i].val;
            cap-=kn[i].wei;
            cout<<" capacity left is "<<cap<<'\n';
        }
        else
        {
            cout<<"last added "<<kn[i].val<<'\n';
            sum += ( kn[i].val / (double) kn[i].wei ) * cap;
            break;
        }
    }

    cout<<sum<<'\n';

    return 0;
}

