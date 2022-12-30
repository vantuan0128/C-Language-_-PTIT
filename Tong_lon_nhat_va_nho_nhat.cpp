#include <bits/stdc++.h>
#include <string>
using namespace std;

void max_val(string a, string b){
	for(char &x:a){
		if(x=='5') x='6';
	}
	for(char &x:b){
		if(x=='5') x='6';
	}
	cout<<stoll(a)+stoll(b)<<endl;
}

void min_val(string a, string b){
	for(char &x:a){
		if(x=='6') x='5';
	}
	for(char &x:b){
		if(x=='6') x='5';
	}
	cout<<stoll(a)+stoll(b)<<" ";
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a,b;
		cin>>a>>b;;
		min_val(a,b);max_val(a,b);
	}
	return 0;
}
