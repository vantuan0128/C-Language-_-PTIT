#include <iostream>
#include <string>
#include <map>
#include <ctype.h>
using namespace std;

int check(string s){
	for(int i=0;i<s.length();i++){
		if(!isdigit(s[i]) || s[0]=='0' ) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		map<int,bool> mp;
		if(check(s)==0) {
			cout<<"INVALID\n"; 
				}
			else{
				for(char x : s){
					mp[x]=true;
				}
				if(mp.size()==10) cout<<"YES\n";
					else cout<<"NO\n";
			}
	}
return 0;
}
