
#include<iostream>
using namespace std;

int binary(int l,int r,int val,int potential)
{
  if(l>=r) { return (val==l*l)?l:potential ; }
  
  int mid = (l+r)/2;
  if(val==mid*mid) return mid;
  if(val<mid*mid) binary(l,mid-1,val,potential);
  else if(val>mid*mid) binary(mid+1,r,val,mid);

  //return -1;
}

int main()
{
  int n;
  cin>>n;
  cout<<binary(1,n/2,n,0)<<'\n';

  return 0;
}
