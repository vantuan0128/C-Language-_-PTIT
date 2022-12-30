#include <bits/stdc++.h>
using namespace std;

class Team{
	public:
		string ma,ten,truong;
		static int cnt;
	public:
		void nhap(){
			cnt++;
			string s=to_string(cnt);
			ma="Team"+string(2-s.size(),'0')+s;
			cin>>ten;
			getline(cin,truong);
		}
		void in(){
			cout<<" "<<ten<<" "<<truong<<endl;
		}
};
int Team::cnt=0;

class ThiSinh: public Team{
	private:
		string mathisinh,tensv,mateam;
		string school, tenteam;
		static int dem;
	public:
		void nhap(){
			dem++;
			string s=to_string(dem);
			mathisinh="C"+string(3-s.size(),'0')+s;
			cin.ignore();
			getline(cin,tensv);
			cin>>mateam;
		}
		void in(){
			cout<<mathisinh<<" "<<tensv<<" ";
			Team::in();
		}
		friend bool operator < (ThiSinh a,ThiSinh b){
			return a.tensv<b.tensv;
		}
		friend void process(Team [],int,ThiSinh [],int);
};

void process(Team ds[], int n, ThiSinh p[], int m){
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j ++){
			if(p[i].mateam == ds[j].ma)
				p[i].school = ds[j].truong;
				p[i].tenteam = ds[j].ten;
		}
	}
	sort(p, p + m);
}

int ThiSinh::dem=0;
int main(){
		int n, m;
	cin >> n >> m;
	cin.ignore();
	Team t[100];
	ThiSinh ts[1000];
	for (int i = 0; i < n; i++) {
		t[i].nhap();
	}
	for (int i = 0; i < m; i++) {
		ts[i].nhap();
	}
	process(t, n, ts, m);
	for (int i = 0; i < m; i++) {
		ts[i].in();
	}
	return 0;
}
