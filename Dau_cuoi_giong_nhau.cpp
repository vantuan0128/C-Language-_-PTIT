#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int dem=0;
		for(int i=0;i<s.length();i++){
			for(int j=i;j<s.length();j++){
				if(s[j]==s[i]) dem++;
			}
		}
		cout<<dem<<endl;
	}
return 0;
}
