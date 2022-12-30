#include <iostream>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long b[n]={0};
		for(int i=0;i<n;i++){
			if(i==0) b[i]=a[i]*a[i+1];
			else if (i==n-1) b[i]=a[i]*a[i-1];
			else b[i]=a[i-1]*a[i+1];
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
