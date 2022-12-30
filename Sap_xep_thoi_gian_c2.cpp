#include <bits/stdc++.h>
using namespace std;
struct thoigian{
	int a,b,c,tich;
	void nhap(){
		cin>>a>>b>>c;
		tich=a*60*60+b*60+c;
	}
	void in(){
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
};

bool cmp(thoigian m, thoigian n){
	return m.tich<n.tich;
}

int main(){
	int t; cin>>t;
	struct thoigian a[t];
	for(int i=0;i<t;i++){
		a[i].nhap();
	}
	sort(a,a+t,cmp);
	for(int i=0;i<t;i++){
		a[i].in();
	}
	return 0;
}
