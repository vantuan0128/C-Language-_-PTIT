#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int ktSNT(long long n){
	if(n<2) return 0;
	if(n%2==0&&n!=2) return 0;
	for(long long i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,i;
		cin>>a>>b;
		int dem=0;
		int m=sqrt(a), n=sqrt(b);
		for(i=m;i<=n;i++){
			if(i*i>=a&&i*i<=b&&ktSNT(i)==1){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
