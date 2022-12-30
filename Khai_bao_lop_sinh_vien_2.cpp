#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class SinhVien{
	private:
		string ten,lop,ns;
		float gpa;
	public:
		friend istream& operator >> (istream& in, SinhVien &a);
		friend ostream& operator << (ostream& out, SinhVien a);	
};

istream& operator >> (istream& in, SinhVien &a){
	getline(in,a.ten);
	in>>a.lop>>a.ns>>a.gpa;
	if(a.ns[1]=='/'){
		a.ns='0' + a.ns;
		}
	if(a.ns[4]=='/'){
		a.ns.insert(3,"0");
		}
	return in;			
}

ostream& operator << (ostream& out, SinhVien a){
	out<<"B20DCCN001"<<" ";
	out<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
	return out;
}

int main(){
	SinhVien a;
	cin>>a;
	cout<<a;
	return 0;
}
