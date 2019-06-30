#include <iostream>
using namespace std;
#define ll long long 
void ones(int n, string osf,ll &out) {
	// Base case
	if(n==0) {
		cout<<osf<<endl;
		out++;
		return;
	}
	// Recursion

	
	ones(n-1, osf+"0",out);
	if(osf.size()==0 or osf[osf.size()-1]=='0') {
		ones(n-1, osf+"1",out);
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	ll out=0;
	ones(n, "",out);
	cout<<out<<'\n';
	return 0;
}
