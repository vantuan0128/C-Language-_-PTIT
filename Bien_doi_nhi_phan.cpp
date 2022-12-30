#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[100][100], b[100][100];
		int i,j,k,n,m;
		cin>>n>>m;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>a[i][j];
				b[i][j]=a[i][j];
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i][j]){
					for(k=0;k<m;k++){
						b[i][k]=1;
					}
					for(k=0;k<n;k++){
						b[k][j]=1;
					}
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cout<<b[i][j]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
