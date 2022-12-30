#include <bits/stdc++.h>
using namespace std;

int ktSNT(int n){
	if(n<2) return 0;
	if(n%2==0&&n!=2) return 0;
	for(int i=3;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int soTang(int n){
	int b=n%10;
	n/=10;
	while(n>0){
		int c=n%10;
		if(b<=c) return 0;
		b=c;
		n/=10;
	}
	return 1;
}

int soGiam(int n){
	int b=n%10;
	n/=10;
	while(n>0){
		int c=n%10;
		if(b>=c) return 0;
		b=c;
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int dem=0;
		int a;
		cin>>a;
		int min=pow(10,a-1);
		long max=0;
		int i=1;
		while(i<=a){
			max+=9*pow(10,a-i);
			i++;
		}
		for(long j=min;j<=max;j++){
            if(soGiam(j)==1||soTang(j)==1){
                    if(ktSNT(j)==1){
                		dem++;
            }
        }
    }
    cout<<dem<<endl;
	}
	return 0;
}
