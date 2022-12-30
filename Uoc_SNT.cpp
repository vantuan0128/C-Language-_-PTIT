#include <iostream>
 #include <math.h> 
 using namespace std; 
 
 int SNT(long long n) { 
 	if(n < 2) return 0; 
 	for(long long i = 2; i <= sqrt(n); i++) { 
 		if(n%i==0) return 0; 
 	} 			
 	return 1; 
 } 
 
 
 int main() { 
 	int t; 
 	long long n; 
	 cin >> t;
 	 while(t--) { 
  		cin >> n; 
  		if(SNT(n)) cout << n; 
  		else for(long long i = 2; i <= sqrt(n); i++) { 
  		while(n%i==0 && SNT(i)) { 
 		 cout << i << " "; 
  		if(i != n/i && SNT(n/i))  
		  cout << n/i << " "; 
		  n/=i; 
		} 
  		} 
  cout << endl; 
  	}
return 0; 
	}
