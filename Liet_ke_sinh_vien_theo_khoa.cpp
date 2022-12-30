#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma,ten,lop,email;
	public:
		friend istream& operator >> (istream& in,SinhVien& a){
			in>>a.ma;
			in.ignore();
			getline(in,a.ten);
			in>>a.lop>>a.email;
			return in;
		}
		friend ostream& operator << (ostream& out,SinhVien a){
			out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
			return out;
		}
		string Getlop(){
			return lop;
		}
};

int main(){
	int n; cin>>n;
	SinhVien a[n];
	map<int,vector<SinhVien>> mp;
	for(int i=0;i<n;i++){
		SinhVien x; cin>>x;
		int khoa=stoi(x.Getlop().substr(1,2));
		mp[khoa].push_back(x);
	} 
	int t; cin>>t;
	while(t--){
		int m; cin>>m;
		cout<<"DANH SACH SINH VIEN KHOA "<<m<<":"<<endl;
		for(SinhVien x : mp[m%100]){
			cout<<x; 
		}
	}
	return 0;
}
