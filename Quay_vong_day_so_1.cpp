#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1000000];
		int n,d;
		do
		cin>>n>>d;
		while(n<=d);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=d;i<n;i++){
			cout<<a[i]<<' ';
		}
		for(int i=0;i<d;i++){
			cout<<a[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
