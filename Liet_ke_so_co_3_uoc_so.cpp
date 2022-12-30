#include <iostream>
#include <math.h>
using namespace std;

long SNT(long n){
	if(n<2) return 0;
	for(long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		for(long i=2;i<=sqrt(n);i++){
			if(SNT(i)==1){
				cout<<i*i<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}
