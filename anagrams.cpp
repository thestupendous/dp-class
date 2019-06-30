//check if two strings are anagrams of each other or not
#include<iostream>
using namespace std;

void clear(int *a,int n)
{
	for(int i=0;i<n;i++) a[i]=0;
}

int main()
{
	string sa,sb;
	cin>>sa>>sb;
	int a[26],b[26];

	clear(a,26);

	for(int i=0;i<sa.size();i++)
	{
		a[ sa[i] - 'a' ] ++;
	}
	for(int i=0;i<sb.size();i++)
	{

		a[ sb[i] - 'a' ] --;
	}

	for(int i=0;i<26;i++)
	{
		if(a[i]!=0) { cout<<"not anagrams\n"; return 0; }
	}
	cout<<"found anagrams!\n";
	return 0;
}
	
