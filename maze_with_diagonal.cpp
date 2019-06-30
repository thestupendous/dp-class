#include<iostream>
using namespace std;

int noOfWays(int n,int m,int cur_row,int cur_col,string res)
{
	if(cur_row==n and cur_col==m) { cout<<res<<'\n' ; return 1; }
	if(cur_row>n or cur_col>m) return 0;
	
	int a=noOfWays(n,m,cur_row+1,cur_col,res+">");
	int b=noOfWays(n,m,cur_row,cur_col+1,res+"v");
	int c=0;
	if(cur_row+cur_col==n+1)
	{
		c = noOfWays(n,m,cur_row+1,cur_col+1,res+"\\");
	}
	if(cur_row-cur_col==0)
	{
		c=noOfWays(n,m,cur_row,cur_col+1,res+"4");
		c+=noOfWays(n,m,cur_row+1,cur_col,res+"2");
	}
	return a+b+c;

}



int main()
{
	int n,m;
	cin>>n>>m;

	cout<<noOfWays(n,m,1,1,"")<<'\n';

	return 0;
}
