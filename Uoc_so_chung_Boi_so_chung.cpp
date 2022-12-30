#include <iostream>
using namespace std;

long USCLN(long a, long b){
	if(b==0) return a;
	return USCLN(b,a%b);
}

long long BSCNN(long a, long b){
	return a*b/USCLN(a,b);
}

int main(){
	int t; cin>>t;
	while(t--){
		long m,n;
		cin>>m>>n;
		cout<<BSCNN(m,n)<<" "<<USCLN(m,n)<<endl;
	}
	return 0;
}
