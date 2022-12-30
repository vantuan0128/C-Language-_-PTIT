#include <bits/stdc++.h>
#define all(a) a.begin(),a.end()
using namespace std;
struct sv{
	int stt;
	string ma, ten, lop, email, dn;
	void in(){
		cout << stt << " " << ma << " " << ten << " " << lop << " " << email << " " << dn << endl;
	}
};

bool cmp(sv a ,sv b){
	return a.ten<b.ten;
}
 
int main(){
	int n; cin >> n;
	map<string, vector<sv>> mp;
	for(int i = 0; i < n; i++){
		sv x;
		x.stt = i + 1;
		cin >> x.ma; 
		cin.ignore();
		getline(cin, x.ten);
		cin >> x.lop >> x.email >> x.dn;
		mp[x.dn].push_back(x);
	}
	int q; cin >> q;
	while(q--){
		string dn; cin >> dn;
		sort(all(mp[dn]), cmp);
		for(auto it : mp[dn]){
			it.in();
		}
	}
	return 0;
}
