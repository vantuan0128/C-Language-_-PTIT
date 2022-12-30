#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ma,ten,gt,ns,dc,mst,hd,tt;
};
int dem=0;
void nhap(NhanVien &a){
	dem++;
	string s = to_string(dem);
	while(s.size() < 5) s = "0" + s;
	a.tt=s;
	cin.ignore();
	getline(cin,a.ten);
	cin>>a.gt>>a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin>>a.mst>>a.hd;
}

void inds(NhanVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].tt<<" "<<a[i].ten << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].hd << endl;
	}
}

bool operator < (NhanVien a, NhanVien b){
		string s=a.ns, t=b.ns;
		int t1=(s[0]-'0')*10+s[1]-'0', n1=(s[3]-'0')*10+s[4]-'0', na1=stoi(s.substr(6));
		int t2=(t[0]-'0')*10+t[1]-'0', n2=(t[3]-'0')*10+t[4]-'0', na2=stoi(t.substr(6));
		if(na1!=na2) return na1<na2;
		if(t1!=t2) return t1<t2;
			return n1<n2;
}

void sapxep(NhanVien a[], int n){
	sort(a,a+n);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
