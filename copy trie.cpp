#include<iostream>
using namespace std;
#include<unordered_map>

class Node
{
	public:
		char data;
		bool isTerminal;
		unordererd_map<char,Node*> children;

		Node(char data, bool isTerminal)
		{
			this->data = data;
			this->isTerminal = isTerminal;
		}

};

void insert(Node *root,string str)
{
	Node *temp = root;
	for(int i=0;i<str.size();i++)
	{
		char ch = str[i];
		if(temp->children.find(ch) != temp->children.end() {
			temp=temp->children[ch];
		} else {
			if(i<str.size()-1) {
				temp->children[ch] = new Node(ch,0);
				temp = 