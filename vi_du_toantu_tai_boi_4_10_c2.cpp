#include <iostream>
using namespace std;
class phanso{
	int tu,mau;
	public:
		phanso(){}
		phanso(int x){ //doi la gia tri muon chuyen
			tu=x; mau=1;}
		operator float(){ // chuyen kieu co so
			float t=tu, m=mau;
			return t/m; // tuong ung kieu float
		}
		void nhap(){
			cout<<"\n nhap tu,mau:";
			cin>>tu>>mau;
		}
		void xem(){
			cout<<"\n "<<tu<<"/"<<mau;
		}
		//phanso operator *(phanso b); //cach 2
		friend phanso operator *(phanso a, phanso b); // cach 3
};

/* phanso phanso:: operator *(phanso b){ //cach 2
			phanso c;
			c.tu=tu*b.tu; c.mau=mau*b.mau;
			return c;
		}  */
phanso operator *(phanso a, phanso b){ //cach 3
			phanso c;
			c.tu=a.tu*b.tu; c.mau=a.mau*b.mau;
			return c;
		}  		


main(){
	phanso b,c; b.nhap();
	phanso a=phanso(15);
	a.xem();
	cout<<"\n float(b)="<<float(b);
/*	a.nhap(); b.nhap();
	c=a*b;
	c.xem(); */
}
