#include <iostream>
#include <string>
using namespace std;

void vietThuong(string &s){
	for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}

int main(){
	string s;
	cin>>s;
	vietThuong(s);
	for(int i=0;i<s.length();i++){
		if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
			cout<<"."<<s[i];
		}
	}	
	return 0;
}
