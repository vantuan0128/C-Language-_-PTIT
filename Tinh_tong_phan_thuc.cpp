#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a;
	cin >> a;
	int i;
	double tong=0;
	for(i=1;i<=a;i++){
		tong = tong + (float) 1/i;
	}
	cout << fixed << setprecision(4) << tong;
	return 0;
	
}
