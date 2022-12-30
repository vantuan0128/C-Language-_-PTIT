#include <bits/stdc++.h>
#include <string>
using namespace std;

class NhanVien{
	private:
		int ma;
		string ten,gt,ns,dc,mst,hd;
	public:
		static int dem;
		friend istream& operator >> (istream& in, NhanVien &a){
			dem++;
			a.ma=dem;
			in.ignore();
			getline(in,a.ten);
			cin>>a.gt>>a.ns;
			in.ignore();
			getline(in,a.dc);
			in>>a.mst>>a.hd;
			return in;
		}
		friend ostream& operator << (ostream& out, NhanVien a){
			out<<setfill('0')<<setw(5)<<a.ma<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.hd<<endl;
			return out; 
		}
};

int NhanVien :: dem=0;

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
