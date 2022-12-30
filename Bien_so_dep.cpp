#include <bits/stdc++.h>
using namespace std;

bool check1(string s){ //day tang
	for(int i = 0 ; i < 4; i++){
		if(s[i] >= s[i+1])
			return false;
	}
	return true;
}
 
bool check2(string s){ //5 chu so bang nhau
	char tmp = s[0];
	for(char x : s){
		if(tmp != x) return false;
	}
	return true;
}
 
bool check3(string s){ //3 so dau bang nhau, 2 so cuoi bang nhau
	return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}
 
bool check4(string s){ //so loc phat
	for(char x : s){
		if(!(x == '6' || x == '8')) return false;
	}
	return true;
}
 
 
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		string s1 = s.substr(5, 6);
		s1.erase(3, 1); //bo dau cham
		if(check1(s1) || check2(s1) || check3(s1) || check4(s1))
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
