#include <iostream>
using namespace std;

int ktSoLienke(long long n){
	int a,b;
	while(n>0){
		a=n%10;
		n/=10;
		b=n%10;
		if(b==a+1||a==b+1){
			a=b;
			n/=10;
		}
		else return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(ktSoLienke(n)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
	
}
