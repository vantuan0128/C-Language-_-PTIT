#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,i;
		cin>>n;
		int dem=0;
		long long a[100000];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]!=0) cout<<a[i]<<' ';
			else dem++;
		}
		for(i=1;i<=dem;i++){
			cout<<'0'<<' ';
		}
		cout<<endl;
	}
}
