#include <iostream>
#include <math.h>
using namespace std;
long ktSNT(long a){
	if(a<2) return 0;
	if(a%2==0&&a!=2) return 0;
	if(a==2) return 1;
	for(int i=3;i<=sqrt(a);i+=2){
		if(a%i==0) return 0;
	}
	return 1; 
}
int main(){
	int t; cin>>t;
	while(t--){
		int m,n; 
		do
		cin>>m>>n;
		while(m>n);
		for(int i=m;i<=n;i++){
			if(ktSNT(i)==1) cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
