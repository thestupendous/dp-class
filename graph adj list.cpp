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

void bfs(nodep *h,int n,int src)
{
	cout<<"entered bfs\n";
	queue<int> q;
	bool visited[n]={0};
	visited[src]=1;
	q.push(src);

	int cur;
	nodep p=NULL;
	while(!q.empty())
	{
		cur=q.front();
		q.pop();
		cout<<cur<<' ';
		p=h[cur];
		while(p!=NULL)
		{
			if(!visited[p->data])
			{
				q.push(p->data);
				visited[p->data] = 1;
			}
			p=p->next;
		}
	}
	cout<<'\n';
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
/*
	for(int i=0;i<e;i++)
	{
		cout<<i<<" : -> ";
		p=h[i];
		while(p!=NULL)
		{

			cout<<p->data<<" -> ";
			p=p->next;
		}
		cout<<"\n.";
	}
*/
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