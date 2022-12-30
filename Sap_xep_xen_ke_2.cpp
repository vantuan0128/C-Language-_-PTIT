#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[100000];
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>=a[j]){
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(i<n-1-i)
			cout<<a[n-1-i]<<' '<<a[i]<<' ';
			if(i==n-1-i){
				cout<<a[i]<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}
