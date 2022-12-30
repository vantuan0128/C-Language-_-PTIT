#include <bits/stdc++.h>
#include <string>
using namespace std;

string MaMonHoc(string bm){
	stringstream ss(bm);
	string res="";
	string token;
	while(ss>>token){
		res += toupper(token[0]); //Lay ra cac chu cai dau
	}
	return res;
}

string getname(string name){
	string res, token;
	stringstream ss(name);
	while(ss >> token){
		res = token;
	}
	return res; //lay ra ten 
}

class GiangVien{
	private:
		string ten,bm,ma;
		static int dem;
	public:
		void nhap(){
			dem++;
			string s = to_string(dem);
			while(s.size()<2) s="0"+s;
			ma="GV"+s;
			getline(cin,ten);
			getline(cin,bm);
		}	
		void in(){
			cout<<ma<<" "<<ten<<" "<<MaMonHoc(bm)<<endl;
		}
		string getTen(){
			return ten;
		}
		string getMa(){
			return ma;
		}
};

bool cmp(GiangVien a, GiangVien b){
	if(getname(a.getTen())!=getname(b.getTen()))
		return getname(a.getTen()) < getname(b.getTen());
	return a.getMa()<b.getMa();
	}

int GiangVien:: dem=0;

int main(){
	GiangVien ds[100];
	int N,i;
	cin>>N;
	cin.ignore();
	for(i=0;i<N;i++){
		ds[i].nhap();
	}
	sort(ds,ds+N,cmp);
	for(int i=0;i<N;i++){
		ds[i].in();
	}
}
