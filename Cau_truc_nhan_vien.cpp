#include <iostream>
using namespace std;

struct NhanVien{
	string ma="00001";
	string ten,gt,ns,dc,mst,hd;
};

void nhap(NhanVien &a){
	getline(cin,a.ten);
	cin>>a.gt;
	cin>>a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin>>a.mst;
	cin>>a.hd;
}

void in(NhanVien a){
	cout<<a.ma<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.hd<<endl;
}

int main(){
	struct NhanVien a;
    nhap(a);
    in(a);
	return 0;
}
