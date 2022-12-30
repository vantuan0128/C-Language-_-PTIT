#include <iostream>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n-1;i++){
			cin>>a[i];
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
		long sum=n*(n+1)/2;
		long tong=0;
		for(int i=0;i<n-1;i++){
			tong+=a[i];
		}
		cout<<sum-tong<<endl;
	}
	return 0;
}
