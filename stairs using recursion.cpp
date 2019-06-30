#include<iostream>
using namespace std;

int ways(int n,int k,int current)
{
	if(current>n){
		return 0;
	}
	if(current==n){
		return 1;
	}


	int result = 0;
	for(int i=1;i<=k;i++)
	{
		result += ways(n,k,current+i);
	}
	return result;
}

int main()
{
	int	n;//=3; //number of stairs;
	int	k;//=3; //length of longest leap that can be made
	cin>>n>>k;
	cout<<ways(n,k,0)<<'\n';



	return 0;
}
