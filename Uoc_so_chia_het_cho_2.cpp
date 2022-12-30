#include <iostream>
#include <math.h>
using namespace std;

int uocSoChiahet2(long n){
	int i;
	int dem=0;
	int s=sqrt(n);
	for(i=1;i<=s;i++){
		if(n%i==0){
			if(i%2==0) dem++;
			if((n/i)%2==0) dem++;
		}
	}
	if(s*s==n&&n%2==0) dem-=1;
	return dem;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		cout<<uocSoChiahet2(n)<<endl;
	}
	return 0;
}
