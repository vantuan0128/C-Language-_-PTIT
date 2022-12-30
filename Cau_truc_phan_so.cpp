#include <iostream>
using namespace std;
typedef long long ll;

ll USCLN(ll a, ll b){
	if(b==0) return a;
	else return USCLN(b,a%b);
}

struct PhanSo{
	ll tu,mau;
};

void nhap(PhanSo &p){
	cin>>p.tu>>p.mau;
}

void rutgon(PhanSo &p){
	ll m=USCLN(p.tu,p.mau);
	p.tu/=m;
	p.mau/=m;
}

void in(PhanSo p){
	cout<<p.tu<<"/"<<p.mau<<endl;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

