#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

struct SinhVien{
	string ma,ten,lop;
	float a,b,c;
};

bool cmp(SinhVien a, SinhVien b){
	return a.ten<b.ten;
}

int main(){
	int n; cin >> n;
	SinhVien a[n];
	for(int i = 0;i < n; i++){
		cin >> a[i].ma;
		while(getchar()!= '\n' );
		getline(cin, a[i].ten);
		cin >> a[i].lop;
		cin >> a[i].a >> a[i].b >> a[i].c;
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << i + 1 << " " << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].a << " " << a[i].b << " " << a[i].c << endl;
	}
}
