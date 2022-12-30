#include <bits/stdc++.h>
using namespace std;
int dem1 = 0, cnt = 0;
class MonHoc{
	public:
		string ma;
		string ten;
		MonHoc(){
			ten = ma = "";
		}
		friend istream& operator >> (istream& in, MonHoc& a) {
			getline(cin,a.ma);
			getline(cin, a.ten);
			return in;
		}
		friend ostream& operator << (ostream& out, MonHoc a){
			cout << a.ma << " " << a.ten << endl;
			return out;
		}
};

class LichThi: public MonHoc{
public:
	string nhom;
	string mamon, ngay, gio, tenmon, macathi;
	LichThi(){
		mamon = ngay = gio = tenmon = "";
		nhom = macathi = "";
	}
	friend istream& operator >> (istream& in, LichThi& a) {
		cnt++;
		cin >> a.mamon >> a.ngay >> a.gio >> a.nhom;
		a.macathi = "T" + string(3 - to_string(cnt).length(), '0') + to_string(cnt);
		return in;
	}

	friend ostream& operator << (ostream& out, LichThi a) {
		cout << a.macathi << " " << a.mamon << " " << a.tenmon << " ";
		cout << a.ngay << " " << a.gio << " " << a.nhom << endl;
		return out;
	}
	friend bool operator < (LichThi a, LichThi b){
		if(a.ngay != b.ngay){
			if(a.ngay.substr(6, 4) != b.ngay.substr(6, 4))
				return a.ngay.substr(6, 4) < b.ngay.substr(6, 4);
			//01/01/2021
			//0123456789
			if(a.ngay.substr(6, 4) == b.ngay.substr(6, 4) && a.ngay.substr(3, 2) != b.ngay.substr(3, 2))
				return a.ngay.substr(3, 2) < b.ngay.substr(3, 2);
			return a.ngay.substr(0, 2) < b.ngay.substr(0, 2);
		}
		if(a.gio != b.gio){
			if(a.gio.substr(0, 2) != b.gio.substr(0, 2))
				return a.gio.substr(0, 2) < b.gio.substr(0, 2);
			//13:30
			//01234
			return a.gio.substr(3, 2) < b.gio.substr(3, 2);
		}
		return a.mamon < b.mamon;
	}
};

void process(MonHoc ds[], int n, LichThi p[], int m){
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j ++){
			if(p[i].mamon == ds[j].ma)
				p[i].tenmon = ds[j].ten;
		}
	}
	sort(p, p + m);
}

int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}
