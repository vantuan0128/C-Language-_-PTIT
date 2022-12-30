#include <iostream>
using namespace std;
//quan li bang gia cac mat hang tren web: Bang gia, mat hang
class hang;
class banggia;

class hang{
		long ma,gia;
		char ten[20];
	public:
		friend class banggia;
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

int main(){
	banggia d;
	d.nhap();
	d.xem();
	d.sapxep();
	cout<<"\n bang gia da sap xep";
	d.xem();
	hang e=d.timkiem(3);
	cout<<"\n mat hang ma so 3";
	e.xem();
return 0;
}
