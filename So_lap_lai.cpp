#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; 
	cin >> t; 
	while(t--){ 
	long long a,x,y; 
	cin >> a >> x >> y;
	 long long s = __gcd(x,y); 
	 for (int i = 0; i < s ; i++){ //uoc chung lon nhat bang ( ucln x va y) lan lap a
	 	cout << a; 
	 } 
	 cout << endl;
	  } 
	}



