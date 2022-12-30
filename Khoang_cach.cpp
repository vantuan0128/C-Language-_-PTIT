#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		double a,b,c,d;
		cin >>a>>b>>c>>d;
		double s=sqrt((c-a)*(c-a)+(d-b)*(d-b));
		cout <<fixed<<setprecision(4)<< s <<endl;
	}
	return 0;
	
}
