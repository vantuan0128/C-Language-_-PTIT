#include <iostream>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		char a;
		cin >>a;
		if(a>='A' && a<='Z'){
			a=a+32;
		}
		else a=a-32;
		cout << a << endl;
	}
	return 0;
	
}
