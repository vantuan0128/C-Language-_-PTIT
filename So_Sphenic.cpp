#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int soSphenic(long n){
	int res=0; //dem so luong thua so nguyen to khac nhau cua n
	for(int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(n%i==0){
			n/=i;
			cnt++;
		}
		if(cnt>=2) return 0; //moi so nguyen to chi xuat hien 1 lan
		if(cnt==1) res++;
	}
	if(n!=1) res++; //n chinh la thua so nguyen to cuoi cung
	if(res==3) return 1;
	else return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--) {
		long n;
		cin>>n;
		if(soSphenic(n)==1){
			cout<<"1"<<endl;
		}
		else cout<<"0"<<endl;
	}
	return 0;
} 
