#include<bits/stdc++.h>
using namespace std;

void check(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int res=-1;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				res=max(res,a[j]-a[i]);
			}
		}
	}
	cout<<res<<endl;
}

main(){
	int t;
	cin>>t;
	while(t--){
	check();
	}
}


