#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	int dem=0;
	for(int i=0;i<n;i++){
		int dem1=0,dem0=0;
		for(int j=0;j<3;j++){
			if(a[i][j]==1){
				dem1++;
			}
			else dem0++;
		}
		if(dem1>dem0) dem++;
	}
	cout<<dem;
	return 0;
}
