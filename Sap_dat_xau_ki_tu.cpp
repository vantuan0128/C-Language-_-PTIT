#include <bits/stdc++.h>
using namespace std;

bool check(string s){
	int a[26]={0};
	for(char x : s){
		a[x-'a']++;
	}
	int max_fre = *max_element(a, a+26);
	if(max_fre - 1 <= s.length() - max_fre){
		return true;
	}
	return false;
}
 
main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(check(s)) cout << "1\n";
		else cout << "0\n";
	}
}
