#include<bits/stdc++.h>
using namespace std;

long long check(long long a){
long long b=0;
	while(a>9){
		b+=a%10;
		a/=10;
	}
	a=b;
	b=0;
	return a;
}
int main(){
	int x;
	cin>>x;
	while(x--){
		long long a;
		cin>>a;
		cout<<check(a)<<endl;
	}
	return 0;
}
