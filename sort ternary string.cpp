#include<iostream>
using namespace std;

int main()
{
	//int n;
	int a[]={0,2,1,2,0,0,1,2,2,0,2,1};
	//for(int i=0;i<n;i++) cin>>a[i];

	int i=0,k=0,j=12-1;
	while(k<=j)
	{
		if(a[k]==0){ 
			swap(a[k],a[i]);
			i++;
			k++;
		}
		else if(a[k]==1)
		{
			k++;
		}
		else
		{
			swap(a[k],a[j]);
			j--;
		}


	}

	for(int i=0;i<12;i++)
	{
		cout<<a[i]<<' ';
	}
}