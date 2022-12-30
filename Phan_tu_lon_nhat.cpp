#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[10000];
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int max=0;
		for(int i=0;i<n;i++){
			if(a[i]>=max){
				max=a[i];
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
