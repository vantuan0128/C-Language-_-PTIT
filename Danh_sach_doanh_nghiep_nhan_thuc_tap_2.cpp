#include <bits/stdc++.h>
using namespace std;

class DoanhNghiep{
	private:
		string ma, ten;
		int sl;
	public:
		void nhap(){
			cin >> ma;
			cin.ignore();
			getline(cin, ten);
			cin >> sl;
		}
		void in(){
			cout << ma << " " << ten << " " << sl << endl;
		}
		string getma(){
			return ma;
		}
		int getsl(){
			return sl;
		}
};
 
bool cmp(DoanhNghiep a, DoanhNghiep b){
	if(a.getsl() != b.getsl())
		return a.getsl() > b.getsl();
	return a.getma() < b.getma();
}
 
int main(){
	int n; cin >> n;
	DoanhNghiep a[n];
	for(int i = 0; i < n; i++) a[i].nhap();
	sort(a, a + n, cmp);
	int q; cin >> q;
	while(q--){
		int x, y; cin >> x >> y;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << x << " DEN " << y << " SINH VIEN:\n";
		for(DoanhNghiep m : a){
			if(m.getsl() >= x && m.getsl() <= y){
				m.in();
			}
		}
	}
	return 0;
}
