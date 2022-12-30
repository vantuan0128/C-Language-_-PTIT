#include <iostream>
#include <math.h>
using namespace std;

int ktSNT(long n){
	if(n<2) return 0;
	if(n%2==0&&n!=2) return 0;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		do 
		cin>>n;
		while(n%2==1&&n<4); 
		for(long i=2;i<=n/2;i++){
			if(ktSNT(i)==1&&ktSNT(n-i)==1&&i<=n-i){
				cout<<i<<' '<<n-i<<endl;
				break;
			}
		}
	}
	return 0;
} 

