#include <iostream>
using namespace std;

long soMayMan (long n){
	int socuoi=n%10;
	n/=10;
	if(socuoi==6){
		socuoi=n%10;
		if(socuoi==8){
			return 1;
		}
		else return 0;
	}
	return 0;
}


int main(){
	int t;
	cin >>t;
	while(t--){
		long n;
		cin>>n;
		if(soMayMan(n)==1) cout<<"1"<<endl;
		else cout <<"0"<<endl;
	}
	return 0;
}
