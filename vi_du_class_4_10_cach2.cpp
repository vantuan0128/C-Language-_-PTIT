#include <iostream>
using namespace std;
//quan li bang gia cac mat hang tren web: Bang gia, mat hang
class hang;
class banggia;
class hangban;

class hang{
		long ma,gia;
		char ten[20];
	public:
		friend class banggia;
		friend class hangban;
		void nhap(){
			cout<<"\n nhap ma, ten, gia:";
			cin>>ma>>ten>>gia;
		}
		void xem(){
			cout<<"\n "<<ma<<" "<<ten<<" "<<gia;
		}
};

class banggia{
		hang ds[100]; int ts;
	public:
	//	friend class hangban; //chi truy nhap thanh phan ben trong
		banggia(){}
		banggia(const banggia &d) //ham khoi tao sao chep, goi 1 lan
			{	ts=d.ts;
				for(int i=0;i<ts;++i)
					ds[i]=d.ds[i];
			}
		void nhap(){
			cout<<"\n tong so hang:"; cin>>ts;
			for(int i=0;i<ts;++i)
				ds[i].nhap();
		}
		void xem(){
			cout<<"\n bang gia:";
			for(int i=0;i<ts;++i)
				ds[i].xem();
		}
		void sapxep(){
			int i,j;hang x;
			for(i=0;i<ts-1;++i)
				for(j=i+1;j<ts;++j)
					if(ds[i].ma>ds[j].ma){
						x=ds[i]; ds[i]=ds[j]; ds[j]=x;
					}
		}
		hang timkiem(long m){
			for(int i=0;i<ts;++i)
				if(m==ds[i].ma)
					return ds[i];
		}
};

class hangban{
		hang hh; //co ma, ten, bang gia
		long sl,thanhtien;
	public:
		void nhap(banggia d) //nhap bien, goi den hang tim kiem
			{	long x;
				cout<<"\n nhap ma hang";
				cin>>x;
				hh=d.timkiem(x);
				cout<<"\n nhap so luong;";cin>>sl;
				thanhtien=sl*hh.gia; //doi tuong cua hanghoa, nen dung friend
			}
		void xem(){
			hh.xem();cout<<" "<<sl<<" "<<thanhtien;		
			}
};

int main(){
	banggia m;
	m.nhap();
	m.xem();
	banggia d(m); //hoac banggia d=m; //banggia d su dung thong tin banggia m
	d.sapxep();
	cout<<"\n bang gia da sap xep";
	d.xem();
	hangban q;
	q.nhap(d); //quan he su dung: Doituong hang ban su dung thong tin ma, ten,bang gia
	q.xem();
	return 0;
}
