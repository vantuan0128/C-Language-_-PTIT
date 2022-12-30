#include <iostream>
using namespace std;
int main(){ //TLE
	int t; cin>>t;
	while(t--){
		int n,x,a[100000];
		cin>>n>>x;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int tmp=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]<a[j]){
					if(a[j]-a[i]==x) {
						cout<<1<<endl;
						tmp=1; 
						break;}
				}
			}
			if(tmp==1) break;
		}
		if(tmp==0) cout<<"-1"<<endl;
	}
	return 0;
}
