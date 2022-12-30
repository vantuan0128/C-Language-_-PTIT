#include <bits/stdc++.h>
#include <string>
using namespace std;

void vietHoa(string &s){
	for(int i=0;i<s.length();i++){ // viet hoa tat ca
		s[i]=toupper(s[i]);
	}
}

void chuanHoa(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){ //viet hoa tu dau tien
		s[i]=tolower(s[i]);
	}
}


int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss>>tmp) v.push_back(tmp);
	for(int i=0;i<v.size()-1;i++){
		chuanHoa(v[i]); //xu li tung phan tu cua v (chi viet hoa tu dau tien)
		cout<<v[i];
		if(i==v.size()-2) cout<<", ";
		else cout<<" ";
	}
	vietHoa(v[v.size()-1]); //viet hoa het tu cuoi cung
	cout<<v[v.size()-1];
	cout<<endl;
	return 0;
}
