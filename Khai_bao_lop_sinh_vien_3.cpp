#include <bits/stdc++.h>
#include <string.h>
#include <iomanip>
using namespace std;

class SinhVien{
	private:
		string ten,lop,ns;
		float gpa;
	public:
		SinhVien(){
			ten=lop=ns="";
			gpa=0;
		}
		friend istream& operator >> (istream& in, SinhVien &a);
		friend ostream& operator << (ostream& out, SinhVien a);	
};

string chuanHoa(string name){
	stringstream ss(name);
	string tmp="";
	string token;
	while(ss>>token){
		tmp+=toupper(token[0]);
		for(int i=1;i<token.size();i++){
			tmp+=tolower(token[i]);
		}
		tmp+=" ";
	}
	tmp.erase(tmp.size()-1);
	return tmp;
}

istream& operator >> (istream& in, SinhVien &a){
	getline(in,a.ten);
	in>>a.lop>>a.ns>>a.gpa;
	a.ten=chuanHoa(a.ten);
	if(a.ns[1]=='/'){
		a.ns='0' + a.ns;
		}
	if(a.ns[4]=='/'){
		a.ns.insert(3,"0");
		}
	return in;			
}

ostream& operator << (ostream& out, SinhVien a){
	out<<"B20DCCN001"<<" ";
	out<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
	return out;
}

int main(){
	SinhVien a;
	cin>>a;
	cout<<a;
	return 0;
}
