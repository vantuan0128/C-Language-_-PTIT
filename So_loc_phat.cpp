#include <iostream>
using namespace std;

long locPhat(long n){
	int socuoi;
	while(n>0){
		socuoi=n%10;
		if(socuoi!=0&&socuoi!=6&&socuoi!=8) return 0;
		n/=10;
	}
return 1;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		long n;
		cin>>n;
		if(locPhat(n)==1) cout<<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}
