#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;
int  check(string s){
    int d=0; 
    int dem=s.length()-1;
    while(d<dem){
        if(s[d]!=s[dem] ||  s[d]=='1' || s[d] == '3' || s[d] == '5'|| s[d]=='7'|| s[d] == '9' ){
            return 0;
        }
        d++;
        dem--;
    }
    return 1;
}  
main(){
   int t;
   cin>>t;
    cin.ignore();
   while(t--){
    string s;
    cin>>s;
    if(check(s)==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
}
