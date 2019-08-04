#include<iostream>
using namespace std;

#define inside(i,j,n,m) ( i<=n and j<=m and i>=0 and j>=0 )

void print(int **a,int n,int m)
{
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<'[';
		for (int j = 0; j < m; ++j)
		{
			/* code */
			cout<<a[i][j]<<' ';
		}
		cout<<"]\n";
	}
}

bool allCheck(int **sd)
{
	#define clear(x) for(int z=0;z<9;z++) x[z]=0;

	bool chk[9]={0};


	//row wise
	for(int i=0;i<9;i++)
	{
		clear(chk);
		for(int j=0;j<9;j++)
		{
			if(chk[sd[i][j]]) return 0;
			chk[sd[i][j]]=1;
		}
	}

	//column wise
	for(int i=0;i<9;i++)
	{
		clear(chk);
		for(int j=0;j<9;j++)
		{
			if(chk[sd[j][i]]) return 0;
			chk[sd[j][i]]=1;
		}
	}
	return 1;
}

void valid(int **sd,int i,int j,int p)
{
	for(int z=0;z=9;z++)
	{
		if(sd[i][z]==p) return 0;
	}
	for(int z=0;z=9;z++)
	{
		if(sd[z][j]==p) return 0;
	}
	return 1;
}

void sudoku(int **sd,int i,int j)
{
	//if(!inside(i,j,n,m)) return;
	if(j==9 and i<9){
		sudoku(sd,i+1,0);
	}
	
	if(sd[i][j]!=0) return;
	if(allCheck(sd)){
		cout<<"found new solution"<<endl;
		print(sd);
		cout<<endl;
		return;
	}

	for(int p=0;p<9;p++)
	{
		if(valid(sd,i,j,p))
		{
			sd[i][j]=p;
			sudoku(sd,i,j+1);



int main()
{
	int **sd = new int*[9];
