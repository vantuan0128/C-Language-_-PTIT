#include<bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
	ifstream fp ("DATA.in");
	string x;
	long long int s=0;
	while(fp >> x) {
			if(sizeof(stoi(x))==sizeof(int)){
				s+=stoi(x);
			}
		}
	cout<<s<<endl;
	fp.close();
}
