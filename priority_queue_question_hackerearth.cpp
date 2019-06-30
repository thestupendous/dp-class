#include<iostream>
using namespace std;
#include<queue>

int main()
{
    long long qa,k,i,j;
    cin>>qa>>k;
    priority_queue<long long> q;

    while(qa--)
    {
        char c;
        cin>>c;
        if(c=='1')
        {
            cin>>i>>j;
            if(q.size()==k)
            {
                if(q.top()>i*i+j*j)
                {
                    q.pop();
                    q.push(i*i+j*j);
                }
            }
            if(q.size()<k)
            {
                q.push(i*i+j*j);
            }
            
        }
        else if(c=='2')
        {
            cout<<q.top()<<'\n';
        }
    }
}
