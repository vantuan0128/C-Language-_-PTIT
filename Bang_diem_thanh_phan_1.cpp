#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

struct SinhVien{
	string ma,ten,lop;
	float a,b,c;
};

void nhap(SinhVien &a){
	cin >> a.ma;
	while(getchar()!= '\n' );
	getline(cin, a.ten);
	cin >> a.lop;
	cin >> a.a >> a.b >> a.c;
} 

bool cmp(SinhVien a, SinhVien b){
	return a.ma<b.ma;
}

void sap_xep(SinhVien a[], int n){
	sort(a,a+n,cmp);
}

void in_ds(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << i + 1 << " " << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].a << " " << a[i].b << " " << a[i].c << endl;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
