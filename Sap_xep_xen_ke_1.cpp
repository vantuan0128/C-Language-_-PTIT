#include <bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

void in(int a[],int n){
	for(int i=0;i<n;i++){
			if(i<n-1-i)
			cout<<a[n-1-i]<<' '<<a[i]<<' ';
			if(i==n-1-i){
				cout<<a[i]<<' ';
			}
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[100000];
		int n;
		cin>>n;
		nhap(a,n);
		sort(a,a+n);
		in(a,n);
		cout<<endl;
	}
	return 0;
}
