#include <iostream>
using namespace std;

void phanTichThuaSoSNT(long a){
	int count=0;
	int i;
	for(i=2;i<=a;i++){
		while(a%i==0){
			count++;
			a=a/i;
		}
		if(count!=0){
		cout<<i<<' '<<count<<' ';
		count=0;
			}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long a;
		cin>>a;
		phanTichThuaSoSNT(a);
		cout<<endl;
	}
	return 0;
}
