#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string msv,ten,lop,email;
	public:
		friend istream& operator >> (istream& in, SinhVien &a){
			in>>a.msv;
			in.ignore();
			getline(in,a.ten);
			in>>a.lop>>a.email;
			return in;
		}
		friend ostream& operator << (ostream& out, SinhVien a){
			out<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
			return out;
		}
		friend bool operator < (SinhVien a, SinhVien b){
			 return a.msv < b.msv;
		}
};

int main(){
	vector<SinhVien> v;
	SinhVien tmp;
	while(cin >> tmp){
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for(SinhVien x : v){
		cout << x;
	}
	return 0;
}
