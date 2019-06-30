//coin game
/*

    solution works in the way that if sum at even and odd places is calculated in advance
    by the starting player,
    she can then keep choosing coins in a way that she picks only those which are at exactly one of even/odd places, as determined by the sums.
    thus the other player is restricted to pick only at the other of even/odd places.

*/
#include<iostream>
using namespace std;
int game(int *a,int n,char start)
{
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
                even+=a[i];
        }
        else
        {
            odd+=a[i];
        }
    }
    cout<<start<<" wins\n";
    return (even>odd)?even:odd;
}


int main()
{
    int n;
    cin>>n;
    int *a = new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<game(a,n,'B')<<'\n';

    return 0;
}

