#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//#undef INT_MAX
#define INT_MAX 234

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
	int root,rank;
};

bool cmp(edge a,edge b)
{
	return (a.wei <= b.wei );
}
int find(set *s,int i)
{
	if(s[i].root != i)
	{
		s[i].root=find(s,s[i].root);
	}
	return i;
}
void unionn(set *s, int u, int v)
{
	int vr = find(s,v);
	int ur = find(s,u);
	if(s[vr].rank <= s[ur].rank)
	{
		s[vr].root = ur;
		s[ur].rank ++;
	}
	else if(s[ur].rank < s[vr].rank)
	{
		s[ur].root = vr;
		s[vr].rank ++;
	}
}
int krushkal(vector<edge> g,int n)
{
	sort(g.begin(),g.end(),cmp);
	if(0)
	{
		cout<<"printing sorted\n";
		for(int i=0;i<g.size();i++)
		{
			cout<<g[i].src+1<<' '<<g[i].dest+1<<endl;
		}
	}
	set *s = new set[n];
	for(int i=0;i<n;i++)
	{
		s[i].root = i;
		s[i].rank = -1;
	}
	int u,v,w;
	int minSum=0;
	for(int i=0;i<g.size();i++)
	{
		u=g[i].src; v=g[i].dest; w=g[i].wei;
		if(s[u].root != s[v].root)
		{
			unionn(s,u,v);
			minSum += w;
		}
	}
	return minSum;
}


int main()
{
	int n,e,a,b,w;
	cin>>n>>e;
	vector<edge> g;
	for(int i=0;i<e;i++)
	{
		cin>>a>>b>>w;
		edge e(a-1,b-1,w);
		g.push_back(e);
	}

	cout<<krushkal(g,n);

	//vector<set> sets;
}