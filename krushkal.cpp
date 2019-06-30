#include<iostream>
#include<algorithm>
using namespace std;

class edge
{public:
	int src,dest,wei;
	edge(int s,int d,int w)
	{
		src=s;
		dest=d;
		wei=w;
	}
};

class set
{public:
	int parent,rank;
};

bool cmp(edge a,edge b)
{
	return (a.wei <= b.wei );
}
int find(set *s,int i)
{
	if(s[i].parent != i)
	{
		s[i].parent=find(s,s[i].parent);
	}
	return i;
}
void unionn(set *s,int n, int u, int v)
{
	int vr = find(s,v);
	int ur = find(s,u);
	if(s[vr].rank <= s[ur].rank)
	{
		s[vr].parent = ur;
		s[ur].rank ++;
	}
	else if(s[ur].rank < s[vr].rank)
	{
		s[ur].parent = vr;
		s[vr].rank ++;
	}
}
void krushkal(vector<edge> g,int n);
{
	sort(g.begin(),g.end(),cmp);
	set *s = new set[n];
	for(int i=0;i<n;i++)
	{
		s[i].parent = i;
		s[i].rank = -1;
	}
	int u,v,w;
	int minSum=0;
	for(int i=0;i<g.size();i++)
	{
		u=g[i].src; v=g[i].dest; w=g[i].wei;
		if(s[u].parent != s[v].parent)
		{
			unionn(s,n,u,v);
			minSum += w;
		}
	}
}


int main()
{
	int n,e,a,b,w;
	cin>>n>>e;
	vector<edge> g;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>w;
		edge e(a,b,w);
		g.push_back(e);
	}

	krushkal(g,n);
	//vector<set> sets;
}
