#include <bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int a[100000];
		int n,k;
		cin>>k>>n;
	for(int i=0;i<k*n;i++){
			cin>>a[i];
	}
	sort(a,a+n*k);
		for(int i=0;i<k*n;i++){
				cout<<a[i]<<' ';
		}
		cout<<endl;
	}
}
