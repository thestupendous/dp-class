#include<iostream>
using namespace std;

int breggs(int n,int k)
{
	if(k==0 or k==1) return k;
	max(breggs(n-1,k-1),breggs())
}


int main()
{

	int n,k;
	cin>>n>>k;
	cout<<breggs(n,k);
}
