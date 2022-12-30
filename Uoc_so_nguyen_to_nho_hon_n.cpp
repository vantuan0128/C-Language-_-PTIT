#include <iostream>
#include <math.h>
using namespace std;

int ktSNT(long n){
	int i;
	if(n<2) return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,i;
		cin>>a;
		for(i=2;i<=a;i++){
			if(ktSNT(i)==1)
				cout<<i<<' ';
			}
			cout<<endl;
		}
	return 0;
}
