#include<iostream>
using namespace std;

int binary(int *a,int l,int r,int val)
{
  if(l>=r) { return (val==a[l])?l:-1 ; }
  
  int mid = (l+r)/2;
  if(val==a[mid]) return mid;
  if(val<a[mid]) binary(a,l,mid-1,val);
  else if(val>a[mid]) binary(a,mid+1,r,val);

  //return -1;
}


int main()
{

	int a[]={-23,-20,-10,0,3,4,23,30,53,100,421,529,932,999};
	int val;
	cin>>val;

	for(int i=0;i<14;i++) cout<<a[i]<<' ';cout<<'\n';
	cout<<binary(a,0,13,val)<<'\n';

	return 0;
}

