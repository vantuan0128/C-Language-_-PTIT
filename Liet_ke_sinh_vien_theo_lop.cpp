#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		friend ostream& operator << (ostream& out, SinhVien a){
			out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
			return out;
		}
 
		friend istream& operator >> (istream& in, SinhVien &a){
			in >> a.ma;
			in.ignore();
			getline(in, a.ten);
			in >> a.lop >> a.email;
			return in;
		}
 
		friend bool operator < (SinhVien a, SinhVien b){
			return a.ma < b.ma;
		}
		string getlop(){
			return lop;
		}
};
 
 
int main(){
	SinhVien a[1000];
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int q; cin >> q;
	while(q--){
		string s; cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
		for(int i=0;i<n;i++){
			if(a[i].getlop()==s){
				cout<<a[i];
			}
		}
	}
	return 0;
}
