#include <iostream>
using namespace std;
class phanso{
	int tu,mau;
	public:
		void nhap(){
			cout<<"\n nhap tu,mau:";
			cin>>tu>>mau;
		}
		void xem(){
			cout<<"\n "<<tu<<"/"<<mau;
		}
		phanso operator *(phanso b){ // cach 1
			phanso c;
			c.tu=tu*b.tu; c.mau=mau*b.mau;
			return c;
		}
};

main(){
	phanso a,b,c;
	a.nhap(); b.nhap();
	c=a*b;
	c.xem();
}
