#include <iostream>
using namespace std;
typedef long long ll;
ll USCLN(ll a,ll b){
	if(b==0) return a;
	return USCLN(b,a%b);
}

class PhanSo{
	private:
		ll tu,mau;
	public:
		PhanSo(ll tu, ll mau){
			this->tu=tu;
			this->mau=mau;
		}
		friend istream& operator >> (istream& in,PhanSo& a);
		friend ostream& operator << (ostream& out, PhanSo a);
		void rutgon(){
			ll m=USCLN(tu,mau);
			tu/=m;
			mau/=m;
		}
};

istream& operator >> (istream& in, PhanSo& a){
	in>>a.tu>>a.mau;
	return in;
}
ostream& operator << (ostream& out, PhanSo a){
	out<<a.tu<<"/"<<a.mau;
	return out;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
