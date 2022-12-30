#include <bits/stdc++.h>
using namespace std;

int ktSNT(long long n){
	if(n<2) return 0;
	if(n!=2&&n%2==0) return 0;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}

int kiemTra(long long n){
	for(int i=1;i<=32;i++){ //toi 32 *32 -> 18 chu so
		if(ktSNT(i)){ // i la so nguyen to
			long tmp= (long) pow(2,i)-1; 
			if(ktSNT(tmp)){  //2 mu i tru 1 cung la snt
				long long hh= tmp*pow(2,i-1);
				if(hh==n) return 1; 
			}
		}
	}
	return 0
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<kiemTra(n)<<endl;
	}
	return 0;
}
