#include <bits/stdc++.h>
using namespace std;
int t;
string n;
void in(){
    long long sum = 0;
    for(int i = 0; i < n.size(); i++)
    {
        sum = ((sum*2)+(n[i]-'0'))%5;
    }
    if(sum%5==0)
    cout<<"Yes"<<endl;
    else 
    cout<<"No"<<endl;
}
int main(){
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>n;
        in();
    }
}
