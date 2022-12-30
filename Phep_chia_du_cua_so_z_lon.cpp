#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve(){
	string s;cin>>s;
	long long m;cin>>m;
	long r=0;
	for(char x:s){
		r=r*10+(x-'0');
		r=r%m;
	}
	cout<<r<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return  0;
}
