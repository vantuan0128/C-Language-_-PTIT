#include <bits/stdc++.h>
using namespace std;
void solve(string s){
	int i = s.length()-2;
	while(i>=0 && s[i]<=s[i+1]){
		--i;
	}
	if(i==-1){
		cout<<-1<<endl; return;
	}
	int j = s.length()-1;
	while(s[i] <= s[j] || (s[i]>s[j] && s[j]==s[j-1])){
	   --j;
    }
	swap(s[i], s[j]);
	if(s[0]=='0'){
		cout<<"-1\n";
	}
	else cout<<s<<endl;
}
 
 
int main(){
	int t;cin>>t;
	while(t--){
		string s; cin >> s;
		solve(s);
	}
}
