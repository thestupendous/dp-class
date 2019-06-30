#include<iostream>
#include<queue>
//#include<priority_queue>
#include<list>
#include<queue>
#include<map>
//list<pair<node,weight>
using namespace std;

void bfs(list<pair<int,int>> *g, int n, int src)
{
	queue<int> q;
	q.push(src);

	bool visited[n]={0};

	visited[src]=1;
	int cur;
	while(!q.empty())
	{
		cur=q.front();
		q.pop();
		cout<<cur<<' ';
		for(auto p:g[cur])
		{
			if(!visited[p.first])
			{
				visited[p.first]=1;
				q.push(p.first);
			}
		}
	}
}

int prims(list<pair<int,int> > *g,int src)
{
	priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;
	pq.push({0,src});
	map<int ,bool> visited;
	int totalWeight = 0;

	while(!pq.empty())
	{
		int cur_vertex = pq.top().second;
		if(visited.find(cur_vertex)!=visited.end())
		{
			pq.pop();
			continue;
		}
		visited[cur_vertex] = true;
		totalWeight += pq.top().first;
		pq.pop();
		for(auto neighbour: g[cur_vertex])
		{
			pq.push({neighbour.second,neighbour.first});
		}
	}
	return totalWeight;
}


	


int main()
{
	int n,e;
	int u,v,w;
	cin>>n>>e;

	list<pair<int,int>> *g;
	g = new list<pair<int,int>>[n];

	for(int i=0;i<n;i++)
	{
		cin>>u>>v>>w;
		g[u].push_back({v,w});

		g[v].push_back({u,w});
	}


	bfs(g,n,0);
	cout<<"---------------\n";
	cout<<prims(g,0);
	return 0;
}

/*
7 8


*/