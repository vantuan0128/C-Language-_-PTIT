#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n; cin>>n;
		long long a[100],b[100];
		for(int i=0;i<n;i++){
			cin>>a[i]; b[i]=-1;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[j]==i){
				b[i]=a[j];
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
