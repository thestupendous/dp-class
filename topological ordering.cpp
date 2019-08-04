#include<iostream>
#include<stack>
using namespace std;
#include<queue>



typedef struct node
{
	int data;
	node * next;
}node,*nodep;
void insert(nodep *h,int a,int b)
{
	nodep n=new node;
	n->data=b;
	n->next=NULL;
	if(h[a]==NULL) { h[a]=n;}
	else{
		nodep p=h[a];
		while(p->next!=NULL) p=p->next;
		p->next = n;
	}
}

void topobfs()
{
	int indeg[n]={0};
	nodep p=NULL;
	for(int i=0;i<n;i++)
	{
		p=h[i];
		while(p!=NULL)
		{
			indeg[p->data]++;
		}
	}
	queue<int> q;
	for(int i=0;i<n;i++)
	{
		if(!indeg[i])
		{
			q.push(i);
		}
	}
	nodep p=NULL;
	while(!q.empty())
	{
		int nod = q.front();
		cout<<nod<<' ';
		p=h[nod];
		while(p!=NULL)
		{
			if(!visited[p->data])
			{
				indeg[p->data]--;
				if(indeg[p->data]==0)
				q.push(p->data);
			}
		}
	}
}


void hel(visited,h,n,nod)
{
	visited[nod]=1;
	for(int e in n)
	{
		if(!visited[e])
		{
			hel(e,visited,ordering);
		}
		ordering.push_front(nod);
	}
}
void topo(int src)
{
	int visited[n];
	list<int> ordering;
	hel(src,visited,ordering);
	for(int e: ordering)
	{
		cout<<e<<"<-";
	}
}

void dfs(nodep *h,int n,int src)
{
	stack<int> s;
	bool visited[n]={0};
	visited[src]=1;
	s.push(src);

	int cur;
	nodep p=NULL;
	while(!s.empty())
	{
		cur=s.top();

		s.pop();
		cout<<cur<<' ';
		p=h[cur];
		while(p!=NULL)
		{
			if(!visited[p->data])
			{
				s.push(p->data);
				visited[p->data] = 1;
			}
			p=p->next;
		}
	}
	cout<<'\n';
}


int main()
{
	int n,e;
	cin>>n>>e;
	nodep *h = new nodep[n];
	int a,b;
	for(int i=0;i<e;i++)
	{
		cin>>a>>b;
		insert(h,a,b);
		insert(h,b,a);
	}

	cout<<"inserted\n";
	nodep p=NULL;

	cout<<"----------------\n";		
	bfs(h,n,0);
	dfs(h,n,0);

	return 0;
}
/*
inputs 
4 5
0 1
1 3
3 2
2 4
1 0

7 8 
0 1
0 2
1 3
2 3
2 4
4 5
4 6
5 6

7 5
0 1
1 2
4 2
5 6
2 0
*/
