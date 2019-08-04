#include<iostream>
#include<vector>
using namespace std;
void subsets(int *a,int i,int n,int k,vector<int> xy,vector<vector<int>> &v)
{
    if(i==n){
        if(accumulate(xy.begin(),xy.end()) == k)
        {
            v.push_back(xy);
        }
    }
    subsets(a,i+1,n,k,xy,v);
    xy.push_back(a[i]);
    subsets(a,i+1,n,k,xy,v);
}
int main() {
    vector<vector<int>> v;
    int n;
    cin>>n;
    int a[n];
    subsets(a,i,k,v);
    
	return 0;
}