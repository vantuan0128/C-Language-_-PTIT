#include <bits/stdc++.h>
#include <vector>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		for(int &x : a) cin >> x;
		for(int &x : b) cin >> x;
		int i=0,j=0;
		vector<int> giao,hop;
		while(i<n&&j<m){
			if(a[i]<b[j]){
				hop.push_back(a[i]);i++;
			}
			else if(b[j]<a[i]){
				hop.push_back(b[j]);j++;
			}
			else{
				giao.push_back(a[i]);
				hop.push_back(a[i]);
				i++;j++;
			}
		}
		while(i < n){
			hop.push_back(a[i]);
			i++;
		}
		while(j < m){
			hop.push_back(b[j]);
			j++;
		}
		for(int x : hop){
			cout << x << " ";
		}
		cout<<endl;
		for(int x : giao){
			cout << x << " "; 
		}
		cout<<endl;
	}
	return 0;
}
