#include<iostream>
using namespace std;
#define un int
struct res
{
    int x;
    int y;
    int d;
};

res* gcd(un a,un b)
{
	cout<<" 1\n";
    res * r = new res;
	if(a>b)
		swap(a,b);
	if( b%a==0) {
        r->d = a;
        r->x = 1;
        r->y = 0;
    }
        //return a;
	else
    {
        res * k = gcd(b%a,a);
        r->d = k->d;
        r->x = (k->y) - (b/a);
        r->y = k->x;

		//return ( gcd(b%a,a) );
    }
    return (r);
}

int main()
{
	un a,b;
	cin>>a>>b;
	res* q = gcd(a,b);
    cout<<q->d<<' '<<q->x<<' '<<q->y<<'\n';

	return 0;
}
