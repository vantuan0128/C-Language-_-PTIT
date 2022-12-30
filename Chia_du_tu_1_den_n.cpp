#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long tong =0;
		for(int i=1;i<=a;i++){
			tong=tong+i%b;
		}
		cout<<tong<<endl;
	}
	return 0;
}
