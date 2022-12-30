#include <iostream>
using namespace std;
class NhanVien{
	private:
		string ten,gt,ns,dc,mst,hd;
	public:
		void nhap(){
			getline(cin,ten);
			cin>>gt>>ns;
			cin.ignore();
			getline(cin,dc);
			cin>>mst>>hd;
		}
		void xuat(){
			cout<<"00001"<<" ";
			cout<<ten<<" "<<gt<<" "<<ns<<" "<<dc<<" "<<mst<<" "<<hd;
		}
};

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
