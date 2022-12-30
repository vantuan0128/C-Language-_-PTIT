#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float t;
	int n=130;
	int dem=0;
		t=0;
	for(int i=1;i<=n;i++){
		dem++;
		cout<<fixed<<setprecision(2)<<t<<" ";
		t=t+ (float)1/4;
	}
	cout<<endl;
	cout<<dem;
	return 0;
}
