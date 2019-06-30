#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

int gcd(int a,int b)
{
	if(b%a == 0) return a;
	else return gcd(b%a,a);
}
/*
bool cmp(vector<int> x,vector<int> y)
{
	return x.size() > y.size() ;
}
*/

void subs(vector<int> arr, int index, vector<int> subarr,vector<vector<int>> &fin)
{
	if(index==arr.size())
	{
		if(subarr.size()>1)
		{
			int g=subarr[0];
			for(int i=1;i<subarr.size();i++)
			{
				g = gcd(g,subarr[i]);
			}
			if(g==1) fin.push_back(subarr);
		}
	}
	else
	{
		subs(arr,index+1,subarr,fin);
		subarr.push_back(arr[index]);
		subs(arr,index+1,subarr,fin);
	}
}



int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		vector<vector<int>> fin;
		vector<int> arr;vector<int> v;
		for(int i=0;i<n;i++)
		{
			arr.push_back(i);
		}
		subs(arr,0,v,fin);

		for(int i=0;i<fin.size();i++)
		{
			for(int j=0;j<fin[i].size();j++)
			{
				cout<< fin[i][j] << ' ';
			}
			cout<<'\n';
		}
	}

	return 0;
}


