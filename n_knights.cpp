#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int **a =  new int*[n];
	for(int i=0;i<n;i++)
	{
		a[i] = new int[n];
	}

	
