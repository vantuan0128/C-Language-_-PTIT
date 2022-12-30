#include <iostream>
using namespace std; // tinh tong tu L-1 toi R-1
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[100000];
		int n,Q;
		cin>>n>>Q;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		while(Q--){
			int L,R;
			cin>>L>>R;
			long long tong=0;
			for(int i=L-1;i<R;i++){
				tong+=a[i];
			}
			cout<<tong<<endl;;
		}
		cout<<endl;
	}
	return 0;
}

