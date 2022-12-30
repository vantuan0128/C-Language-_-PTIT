#include <bits/stdc++.h>
#include <cmath> 
typedef long long ll;
using namespace std;

ll USCLN(ll a, ll b){
	if(b==0) return a;
	return USCLN(b,a%b);
}

ll BSCNN(ll a, ll b){
	return a*b/USCLN(a,b);
}

struct PhanSo{
	ll tu, mau;
	void rutgon(){
		int g = USCLN(abs(tu), abs(mau));
		tu /= g;
		mau /= g;
	}
};
 
void process(PhanSo A, PhanSo B){
	A.rutgon(); B.rutgon();
	ll mc = BSCNN(A.mau, B.mau);
	PhanSo C;
	C.tu = (int)pow(mc / A.mau * A.tu + mc / B.mau * B.tu,2);
	C.mau = mc*mc;
	C.rutgon();
	PhanSo D{A.tu*B.tu*C.tu, A.mau * B.mau * C.mau};
	D.rutgon();
	cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl;
}
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
