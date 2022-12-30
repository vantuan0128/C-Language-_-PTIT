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
		friend bool operator < (NhanVien a, NhanVien b){
			string s=a.ns, t=b.ns;
			int t1=(s[0]-'0')*10+s[1]-'0', n1=(s[3]-'0')*10+s[4]-'0', na1=stoi(s.substr(6));
			int t2=(t[0]-'0')*10+t[1]-'0', n2=(t[3]-'0')*10+t[4]-'0', na2=stoi(t.substr(6));
			if(na1!=na2) return na1<na2;
			if(t1!=t2) return t1<t2;
				return n1<n2;
		}
};

int NhanVien :: dem=0;

void sapxep(NhanVien a[],int n){
	sort(a,a+n);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds,N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
