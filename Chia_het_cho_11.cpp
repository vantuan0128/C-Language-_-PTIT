#include <bits/stdc++.h>
#include <string> 
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int r=0;
		for(int i=0;i<s.length();i++){
			if(i%2==0){
				r+=s[i]-'0';
			}
			else r-=s[i]-'0';
		}
		if(r%11==0) cout<<1<<endl;
		else cout <<0<<endl;
	}
	return 0;
}
