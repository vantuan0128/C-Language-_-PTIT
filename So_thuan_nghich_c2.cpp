#include <bits/stdc++.h>
using namespace std;
long long soThuanNghich(long long n){
	int N;
	long long socu=n;
	long long somoi=0;
	while(n>0){
		N=n%10;
		somoi=somoi*10+N;
		n/=10;
	}
	if(somoi==socu) return 1;
	else return 0;
}

int main(){
	int t; cin>>t;
	while(t--){
	long long a;
	cin>>a;
	if(soThuanNghich(a)==1) cout<<"YES\n";
	else cout<<"NO\n";
	}
	return 0;
}
