#include <iostream>
using namespace std;

long long USCLN(long a,long b){
if(b==0) return a;
return USCLN(b,a%b);
}

long long BSCNN(long a,long b){
	return a*b/USCLN(a,b);
}

long long kq(int n){
	long long i;
	long long a=1;
	for(i=2;i<=n;i++){
		a=BSCNN(a,i);
	}
	return a;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<kq(n)<<endl;
	}
	return 0;
	
}
