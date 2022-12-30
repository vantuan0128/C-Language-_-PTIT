#include <iostream>
#include <math.h>
using namespace std;
long tongChuso(long n){
	int sum1=0;
	int N;
	while(n>0){
	    N=n%10;
	    sum1=sum1+N;
	    n/=10;
	}
	return sum1;
}

long tongThuaso(long n){
	int sum2=0;
	for(int i=2;i<=n;i++){
	    while(n%i==0){
	        sum2=sum2+tongChuso(i);
	        n/=i;
	    }
	}
	return sum2;
}

long ktSNT(long n){
	if(n<2) return 0;
	if(n%2==0&&n!=2) return 0;
	for(long i=3;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
    long t;
    cin>>t;
	while(t--){
		long n;
		cin>>n;
		if((tongChuso(n)==tongThuaso(n))) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
return 0;
}
