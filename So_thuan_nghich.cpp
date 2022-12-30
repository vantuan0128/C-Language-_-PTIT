#include <iostream>
using namespace std;

long long thuanNghich (long long n){
	long long socu=n;
	long long somoi=0;
	while(n>0){
		int socuoi=n%10;
		somoi=somoi*10+socuoi;
		n/=10;
	}
	if(somoi==socu) return 1;
	else return 0;
}

int main(){
	int t;
	cin>> t;
	while(t--){
		long long n;
		cin >> n;
		if(thuanNghich(n)==1) cout<<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}
