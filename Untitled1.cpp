#include <bits/stdc++.h>
using namespace std;
int main(){
	string s="ngon ngu lap trinh java";
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss>>tmp) v.push_back(tmp);
	cout<<ss;
	return 0;
}
