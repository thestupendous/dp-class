//
#include<iostream>
using namespace std;
#include<unordered_map>
#include<cmath>

bool cubefree(int n)
{
	unordered_map<int,int> x;
	int i,sq=(int)sqrt(n);
	for(i=2;i<=sq;i++)
	{
		while(n%i==0)
		{
			x[i]++;
			n/=i;
		}
	}
	//for(auto j=x.begin();j!=x.end();j++) cout<<(*j).first<<' '<<(*j).second<<'\n';
	for(auto j=x.begin();j!=x.end();j++) if((*j).second>=3) return 1;
	return 0;
}

int main()
{
	int t;
	int n;
	cin>>t;
	while(t)
	{
		cin>>n;
		cubefree(n);
		--t;
	}

	return 0;
}