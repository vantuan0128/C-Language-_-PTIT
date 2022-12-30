#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,i,j;
		do
		cin>>n>>k;
		while(k>=n);
		int a[100000];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]<a[j]){
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
		for(i=0;i<k;i++){
			cout<<a[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
