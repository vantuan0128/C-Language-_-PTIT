#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class SinhVien{
	private:
		string ten,lop,ns;
		float gpa;
	public:
		void nhap(){
			getline(cin,ten);
			cin>>lop>>ns>>gpa;
			if(ns[1]=='/'){
				ns='0'+ns;
			}
			if(ns[4]=='/'){
				ns.insert(3,"0");
			}
		}
		void xuat(){
			cout<<"B20DCCN001"<<" ";
			cout<<ten<<" "<<lop<<" "<<ns<<" "<<fixed<<setprecision(2)<<gpa;
		}	
};

int main(){
	SinhVien a;
	a.nhap();
	a.xuat();
	return 0;
}
