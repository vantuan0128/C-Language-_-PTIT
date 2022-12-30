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
	long n;
	cin>>n;
	if(ktSNT(n)==1) cout<<"YES";
	else cout<<"NO";
	return 0;
	
}
