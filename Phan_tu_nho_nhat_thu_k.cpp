#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,i;
		cin>>n>>k;
		int a[100000];
		for(i=0;i<n*n;i++){
			cin>>a[i];
		}
		sort(a,a+n*n);
		cout<<a[k-1]<<endl;
	}
	return 0;
}
