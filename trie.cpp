#include<iostream>
using namespace std;
#define x p->array[s[i]-'a']
typedef struct N
{
    char data;
    bool isTerminal;
    N **array;
}node,*nodep;
nodep init(char d,bool terminal)
{
    nodep n = new node;
    n->data = d;
    n->isTerminal = terminal;
    n->array = new nodep[26];
    return n;
}
void insert(nodep &trie, string s)
{
    if(trie==NULL)
    {
        trie = new node;
        trie->data='\n';
        trie->isTerminal=0;
        trie->array = new nodep[26];
        for(int i=0;i<26;i++) trie->array[i]=NULL;
    }
    nodep p=trie;
    for(int i=0;i<s.size();i++)
    {
        if( x == NULL)      //x=p->array[s[i]-'a'] is already defined as macro
        {
            x = init(s[i],i==s.size()-1);
            p=x;
        }
        else
        {
            if(i==s.size()-1)
                p->isTerminal=1;
            p=p->array[s[i]-'a'];
        }
    }
}
            
void search(nodep trie,string s)
{
    for(int i=0;i<s.size();i++)
    {
        trie = trie->array[s[i]-'a'];
    }
    if(trie->isTerminal){
        cout<<"found full text\n";
    }
}
        
        


int main()
{

    int n;string s;
    nodep trie=NULL;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        insert(trie,s);
    }
    cout<<"string to search ";
    cin>>s;
    search(trie,s);

    return 0;
}
