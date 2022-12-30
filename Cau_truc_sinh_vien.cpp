#include <iostream>
#include <iomanip>
using namespace std;

struct SinhVien{
	string name,ns,lop,ma;
	float gpa;
};

void nhap(SinhVien &a){
	getline(cin,a.name);
	cin>>a.lop;
	cin>>a.ns;
	cin>>a.gpa;
	a.ma="B20DCCN001";
	string tmp="";
	if(a.ns[1]=='/'){
		a.ns="0"+a.ns;
	}
	if(a.ns[4]=='/'){
		a.ns.insert(3,"0");
	}
}

void in(SinhVien a){
	cout<<a.ma<<" "<<a.name<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
}

int main(){
	struct SinhVien a;
	nhap(a);
	in(a);
	return 0;
}
