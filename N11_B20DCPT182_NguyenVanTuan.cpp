#include <bits/stdc++.h>
#include <vector> 

//N11 B20DCPT182 Nguyen Van Tuan 

using namespace std;
class hang;
class banggia;
class hangban;
class hoadon;
class hang{
	protected:
		int mahang;
		string tenhang; 
		long gia;
	public:
		friend class banggia;
		friend class hangban;
		void nhap(){
			cin>>mahang>>tenhang>>gia;
		} 
		void xem(){
			cout<<"\n "<<mahang<<" "<<tenhang<<" "<<gia;
		}
};

class banggia{
			vector <hang> dshang;
		public:
			void nhapbp(){
				int ts; hang x;
				cin>>ts;
				for(int i=0;i<ts;i++){
					x.nhap();dshang.push_back(x);
				}
			}
			void xemmh(){
				for(int i=0;i<dshang.size();i++){
					dshang[i].xem();
				}
			}
			hang timhang(int t){
				for(int i=0;i<dshang.size();i++){
					if(dshang[i].mahang==t){
						return dshang[i];
						hang x; x.mahang=" ";
						return x;
					}
				}
			}
};

class hangban:public hang{
	private:
		long soluong, thanhtien;
	public:
		friend class hoadon;
		void nhap(banggia d){
			int t;
			cin>>t;
			hang x=d.timhang(t);
			mahang=x.mahang; tenhang=x.tenhang; gia=x.gia;
			cin>>soluong;
			thanhtien=soluong*gia;
		}
		void xem(){
			hang::xem();
			cout<<" "<<soluong<<" "<<thanhtien;
		}
};

class hoadon: public hangban{
	private:
		int sohoadon; string khachhang;
		vector <hangban> dshangban;
		long tongtien;
	public:
		void nhapbp(banggia d){
			int ts;
			cin>>sohoadon;
			cin.ignore(); getline(cin,khachhang);
			cin>>ts;
			while(ts--){
				hang x;
				cin>>x.mahang;
				for(int i=0;i<dshang.size();i++){
					if(dshang[i].mahang==timhang(x)){
							int sl; cin>>sl; dshangban.push_back(sl);
					}
				}
			}
		}
		void xemmh(){
			cout<<sohoadon<<" "<<khachhang;
			
		}	
};
main(){
	banggia a; a.nhapbp(); a.xemmh();
	hoadon b; b.nhapbp(a);
	hoadon c;
}
