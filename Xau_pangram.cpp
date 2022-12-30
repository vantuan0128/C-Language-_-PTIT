#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;

void Pangram(char s[], int k){
	int n=strlen(s);
	int dem=0;
	for(int i=0;i<n;i++){
		bool kt= true ;
		for(int j=i-1;j>=0;j--){
			if(s[i]==s[j]){
				kt=false ;
				break;
			}
		}
		if(kt==true){
			dem++;
		}
	}
	int kitucandien=26-dem;
	if(k>=kitucandien) cout<<"1"<<endl;
	else cout<<"0"<<endl;
}


main(){
	int t;
	cin>>t;
	while(t--){
	cin.ignore();
	char s[100000];
	int k;
	cin>>s;
	cin>>k;
	Pangram(s,k);
}
}
