#include <iostream>
 #include <math.h> 
 using namespace std; 
 
 long long SNT(long long n) { 
 	if(n < 2||n%2==0) return 0; 
 	for(long long i = 3; i <= sqrt(n); i+=2) { 
 		if(n%i==0) return 0; 
 	} 			
 	return 1; 
 } 
 
 
 long long SNTmax(long long n){
 	if(SNT(n)) return n;
 	long long x;
 	for(long long i=2;i<=sqrt(n);i++){
 		if(n%i==0){
 			if(SNT(n/i)) return n/i;
 			else if(SNT(i)) x=i;
		 }
	 }
	 return x;
 } 
 
 
 int main() { 
 	int t; 
 	long long n; 
	 cin >> t;
 	 while(t--) { 
  		cin >> n; 
		cout<<SNTmax(n)<<endl;
  	}
return 0; 
	}
