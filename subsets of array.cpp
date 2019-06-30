#include<iostream>
using namespace std;
#include<vector>
#include<numeric>

void subsets(vector<int> a,vector<int> osf,int k)
{cout<<"entered\n";
	if(a.size()==0)
	{
		if(osf.size()!=0) if( accumulate(osf.begin(),osf.end(),0) == k)
		{
			for(int i=0;i<osf.size();i++) cout<<osf[i]<<' '; cout<<endl;
		}
	}

	int take=a[0];
	a.erase(a.begin());
	subsets(a,osf,k);
	osf.push_back(take);
	subsets(a,osf,k);
cout<<"leaving with size "<<a.size()<<'\n';
}

int main()
{
	int n,k;
	cin>>n;
	std::vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>k;
	
	vector<int> osf;
	subsets(a,osf,k);
}