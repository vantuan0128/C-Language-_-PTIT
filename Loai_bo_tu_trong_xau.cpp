#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string word;
	cin>>word;
	stringstream ss(s);
	string token;
	while(ss>>token){
		if(token!=word){
			cout<<token<<' ';
		}
	}
	return 0;
}
