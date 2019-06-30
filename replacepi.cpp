#include <iostream>
using namespace std;

void replacepi(string str, string osf) {
	//cout<<"recieved "<<str<<'\n';// Base case
	if(str.size() == 0) {
            //cout<<"  reached end!\n";
		cout<<osf<<endl;
		return;
	}



	if(str.size() >= 2)
	{
	    //cout<<" met condition\n";
	    if(str[0] == 'p' and str[1] == 'i') {
			replacepi(str.substr(2), osf+"3.14");
	    }
	}
	if(str.size()<2 or str[0]!='p' or (str.size()>=2 and str[0]=='p' and str[1]!='i')){
			char ch=str[0];
			replacepi(str.substr(1), osf+ch);
		}

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
    {
    	string str;
    	cin>>str;
    	replacepi(str, "");
    }
	return 0;
}
