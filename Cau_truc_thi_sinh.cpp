#include <iostream>
#include <iomanip>
using namespace std;

struct ThiSinh{
	string name, ns;
	float a,b,c;
};

void nhap(ThiSinh &a){
	getline(cin,a.name);
	cin>>a.ns;
	cin>>a.a>>a.b>>a.c;
}

void in(ThiSinh a){
	cout<<a.name<<" "<<a.ns<<" "<<fixed<<setprecision(1)<<a.a+a.b+a.c<<endl;
}

int main(){
	struct ThiSinh A;
    nhap(A);
    in(A);
	return 0;
}
