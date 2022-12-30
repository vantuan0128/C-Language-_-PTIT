#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		vector<int> b(a, a + n);
		sort(b.begin(), b.end());
		for(int i = 0; i < n; i++){
			auto it = upper_bound(b.begin(), b.end(), a[i]);
			if(it == b.end()) cout << "_ ";
			else cout << (*it) << " ";
		}
		cout << endl;
	}
	return 0;
}
