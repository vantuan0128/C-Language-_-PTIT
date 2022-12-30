#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[100000];
		int n,i;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int j=1;
		while(j>0){
			int count=0;
			for(int i=0;i<n;i++){
				if(j==a[i]) {
					count++; //danh dau so nay da xuat hien
				}
			}
			if(count==0){ //so nay chua xuat hien
				cout<<j<<endl;
				break;
			}
			else j++;
		}
	}
	return 0;
}
