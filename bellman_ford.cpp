//bellman ford.cpp

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void print(int *a,int n) { for(int i=0;i<n;i++) cout<<' '<<a[i]; cout<<endl; }

int* bellman(vector<pair<pair<int,int>,int>> gra,int n)
{
	int *dist = new int[n];
	dist[0]=0;
	for(int i=1;i<n;i++) dist[i] = INT_MAX;
	int u,v,w;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<gra.size();j++)
		{
			u = gra[j].first.first;
			v = gra[j].first.second;
			w = gra[j].second;
			//cout<<"\tu,v,w"<<u<<' '<<v<<' '<<w<<endl;
			if(dist[u] != INT_MAX)
			{
				if(dist[v] > dist[u]+ w)
					dist[v] = dist[u]+w;
			}
		}
		//print(dist,n);
	}
	for(int j=0;j<gra.size();j++)
		{
			u = gra[j].first.first;
			v = gra[j].first.second;
			w = gra[j].second;
			//cout<<"\tu,v,w"<<u<<' '<<v<<' '<<w<<endl;
			if(dist[u] != INT_MAX)
			{
				if(dist[v] > dist[u]+ w)
				{
					cout<<"detected negative edge cycle!\nExiting...\n";
					return NULL;
				}
			}
		}
	return dist;
}

int main()
{
	vector<pair<pair<int,int>,int>> gra;
	int n,e,a,b,w;
	cin>>n>>e;
	for(int i=0;i<e;i++)
	{
		cin>>a>>b>>w;
		gra.push_back( {{a,b},w} );
		gra.push_back( {{b,a},w} );
	}
	cout<<endl;

	int *dist = bellman(gra,n);

	for(int i=0;i<n;i++)
	{
		cout<<dist[i]<<' ';
	}
	cout<<endl;

	return 0;
}
/*

inputs 
7 7
1 3 2
5 1 -4
2 5 3
2 6 2
3 5 1
4 6 -3
7 4 -3

7 8
0 1 2
0 2 3
1 3 1
2 3 4
2 4 6
4 5 2
4 6 1
5 6 1


*/
