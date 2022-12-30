#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,i,a[100000];
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<a[n-1]-a[0]<<endl;
	}
	return 0;
}
