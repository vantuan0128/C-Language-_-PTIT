#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
		string s;
		set<string> v;
		for(int i=0;i<t;i++){
			getline(cin,s); v.insert(s);
		}
		cout<<v.size()<<endl;
	return 0;
}
