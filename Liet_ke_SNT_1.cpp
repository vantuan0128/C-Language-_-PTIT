#include <iostream>
#include <math.h>
using namespace std;

long ktSNT(long n){
	int i;
	if(n<2) return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	long a,b;
	cin>>a>>b;
	long i;
	if(a<b){
	for(i=a+1;i<b;i++){
		if(ktSNT(i)==1)
		cout<<i<<' ';
	}}
	if(a>b){
	for(i=b+1;i<a;i++){
		if(ktSNT(i)==1)
		cout<<i<<' ';
	}}
	return 0;
}
