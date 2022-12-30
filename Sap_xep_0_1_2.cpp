#include <bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
for(int i=0;i<n;i++){
			cin>>a[i];
	}
}

void in(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100000];
		nhap(a,n);
		sort(a,a+n);
		in(a,n);
		cout<<endl;
		}
	return 0;
}
