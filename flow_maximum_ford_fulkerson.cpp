#include<iostream>
using namespace std;
#include<list>

int main()
{
	int n,e,a,b,w;
	cin>>n>>e;
	list<pair<int,int>> *gra;
	gra = new list<pair<int,int>>[n];

	for(int i=0;i<e;i++)
	{
		cin>>a>>b>>w;
		gra[i].push_back(

	for(i