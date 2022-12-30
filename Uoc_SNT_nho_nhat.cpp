#include <iostream>
#include <math.h>
using namespace std;

int ktSNT(int n){
	if(n<2) return 0;
	if(n%2==0&n!=2) return 0;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}

int ptThuaSNT(int n){
	while(n%2==0){
		n/=2; 
	}
	for(int i=3;i<=sqrt(n);i+=2){  // luon la so nguyen to
		 if(n%i==0){  // la uoc
			 return i;
  			}
	} 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[100000];
		int n,i;
		cin>>n;
		int dem=1;
		for(i=0;i<n;i++){
			a[i]=dem;
			dem++;
		}
		for(i=0;i<n;i++){
			if(a[i]==1) {
				cout<<'1'<<' '; 
				}
			else if (a[i]%2==0) {
				cout<<'2'<<' ';
				}
			else if(ktSNT(a[i])==1) {
				cout<<a[i]<<' '; 
				}
			else cout<<ptThuaSNT(a[i])<<' '; 
		}
		cout<<endl;
	}
	return 0;
}
