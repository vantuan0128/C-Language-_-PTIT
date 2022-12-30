#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
struct SinhVien{
	string ma,ten,lop,ns;
	float gpa;
};

string chuan(string name){
	vector<string> v;
	stringstream ss(name);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	string res = "";
	for(int i = 0; i < v.size(); i++){
		res += (toupper(v[i][0]));
		for(int j = 1; j < v[i].length(); j++){
			res += (tolower(v[i][j]));
		}
		if(i != v.size() - 1) 
			res.append(" "); //noi them
	}
	return res;
}

void nhap(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,a[i].ten);
		a[i].ten=chuan(a[i].ten);
		cin>>a[i].lop>>a[i].ns>>a[i].gpa;
	}
}

void in(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		cout<<"B20DCCN";
		string s= to_string(i+1);
		while(s.size()<3) s="0"+s;
		cout<<s<<" ";
		if(a[i].ns[1]=='/'){
			a[i].ns="0"+a[i].ns;
		}
		if(a[i].ns[4]=='/'){
			a[i].ns.insert(3,"0");
		}
		cout<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].gpa<<endl;
	}
}


int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
