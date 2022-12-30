#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define fi first
#define se second
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int main(){
	int n; cin >> n;
	vector<pair<int,pi>> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i].fi >> v[i].se.fi>> v[i].se.se;
	}
	sort(all(v), [](const pair<int,pi>& a, const pair<int,pi> &b){
		if(a.fi != b.fi)
			return a.fi < b.fi;
		if(a.se.fi != b.se.fi)
			return a.se.fi < b.se.fi;
		return a.se.se < b.se.se;
	});
	for(auto it : v){
		cout << it.fi << " " << it.se.fi << " " << it.se.se << endl;
	}
	return 0;
}
