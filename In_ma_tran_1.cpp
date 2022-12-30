#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j;
		cin>>n;
		int a[100][100];
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		int hang=0;
		while(hang<n){
			for(j=0;j<n;j++){
				cout<<a[hang][j]<<' ';
			}
			hang++;
			if(hang==n) break;
			else for(i=n-1;i>=0;i--){
				cout<<a[hang][i]<<' ';
			}
			hang++;
		}
		cout<<endl;
	}
	return 0;
}
