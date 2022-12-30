#include <bits/stdc++.h>
#include <string>
#include <iomanip>
using namespace std;
 int dem=0; 
class SinhVien{
	private:
		string ten, lop, ns, ma;
		float gpa;
	public:
		SinhVien(){
			ma=ten=lop=ns="";
			gpa=0;
		}
		friend istream& operator >> (istream& in, SinhVien &a){
			++dem;
			a.ma="B20DCCN"+string(3-to_string(dem).size(),'0')+to_string(dem);
			cin.ignore();
			getline(in,a.ten);
			in>>a.lop>>a.ns>>a.gpa;
			if(a.ns[1]=='/'){
				a.ns="0"+a.ns;
			}
			if(a.ns[4]=='/'){
				a.ns.insert(3,"0");
			}
			return in;
		}
		friend ostream& operator << (ostream& out,const SinhVien a){
			out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
			return out;
		}	
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
