#include <iostream>
using namespace std;
	
long long giaithua(int n){
	int i;
	long long S=1;
	for(i=1;i<=n;i++){
		S*=i;
	}
return S;	
}

int main(){
	long long a;
	cin >> a;
	int i;
	long long tong=0;
	for(i=1;i<=a;i++){
		tong+=giaithua(i);
	}
	cout << tong;
	return 0;
}
