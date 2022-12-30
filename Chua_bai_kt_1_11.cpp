#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <fstream>
using namespace std;
class hang; 
class hangban;
class banggia;
class hoadon;

class hang{
	protected:
		char tenhang[20]; long gia;
	public:
		friend class banggia;
		friend class hangban;
		friend class hoadon;
		void nhapbp(){
			cout<<"\n Ten hang, gia: ";
			cin>>tenhang>>gia; 
		};
		void xemmh(){
			cout<<"\n "<<tenhang<<" "<<gia;
		}
};

class banggia{
		vector <hang> dshang;
	public:
		void nhapbp(){
			hang x; int n;
			cout<<"\n Tong so mat hang:";cin>>n;
			for(int i=0;i<n;i++){
				x.nhapbp();dshang.push_back(x);
			}
		}
		void xemmh(){
			cout<<"\n Bang gia:";
			for(int i=0;i<dshang.size();i++){
				dshang[i].xemmh();
			}
		}
		hang timhang(char th[]){
			for(int i=0;i<dshang.size();i++){
				if(!strcmp(dshang[i].tenhang,th)){
					return dshang[i];
				}
				hang x; strcpy(x.tenhang," ");//TH ko tim thay
				return x;
			}
		}	
};

class hangban:public hang{
	private:
		long soluong,thanhtien;
	public:
		friend class hoadon;
		void nhapbp(banggia d){
			cout<<"\n Ten hang: ";
			cin>>tenhang;
			hang x=d.timhang(tenhang);
			gia=x.gia;
			cout<<"\n So luong:"; cin>>soluong;
			thanhtien=gia*soluong;
		}
		void xemmh(){
			hang::xemmh();
			cout<<" "<<soluong<<" "<<thanhtien;
		}
};

class hoadon{
		long sohoadon, tongtien;
		char khachhang[30];
		vector <hangban> dshangban;
	public:
		void ghitep(){
			fstream fg("d:\\hd.dat",ios::out|ios::binary);		
			fg.write(reinterpret_cast <char *> (&sohoadon),sizeof(long));
			fg.write(reinterpret_cast <char *> (&tongtien),sizeof(long));
			fg.write(reinterpret_cast <char *> (&khachhang),30*sizeof(char));
			for(int i=0;i<dshangban.size();i++){
				fg.write(reinterpret_cast <char *> (&dshangban[i]),sizeof(hangban));
			}
			fg.close();
		}
		void doctep(){
			fstream fd("d:\\hd.dat",ios::in|ios::binary);
			fd.read(reinterpret_cast <char *> (&sohoadon),sizeof(long));
			fd.read(reinterpret_cast <char *> (&tongtien),sizeof(long));
			fd.read(reinterpret_cast <char *> (khachhang),30*sizeof(char));
			hangban x;
			while (1){
				fd.read(reinterpret_cast <char *> (&x),sizeof(hangban));
				if(!fd) break;
				dshangban.push_back(x);
			}
			fd.close();
		}
		void nhapbp(banggia d){
			cout<<"\n So hoa don, khach hang:";
			cin>>sohoadon>>khachhang;
			tongtien=0; int ts; hangban x; 
			cout<<"\n Tong so hang ban: ";cin>>ts;
			for(int i=0;i<ts;i++){
				x.nhapbp(d);
				dshangban.push_back(x);
				tongtien+=x.thanhtien;
			}
			
		}
		void xemmh(){
			cout<<"\n Hoa don so: "<<sohoadon;
			cout<<"\n Khach hang: "<<khachhang;
			cout<<"\n Tong tien: "<<tongtien;
			for(int i=0;i<dshangban.size();i++){
				dshangban[i].xemmh();
			}
		}
};
main(){
	banggia a; a.nhapbp(); a.xemmh();
	hoadon b; b.nhapbp(a); //b.xemmh();
	b.ghitep();
	hoadon c; 
	c.doctep(); c.xemmh(); 
}
