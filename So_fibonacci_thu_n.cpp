#include <iostream>
using namespace std;
 
long long fibo (int n){
    long long a1 = 1, a2 = 1;
    if(n==1||n==2)return 1; // so fibo thu 1 va thu 2 thi gia tri la 1 
    long long i = 3;
    long long a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a; // gia tri so fibo thu i
}

int main(){
	 int t;
	 cin>>t;
	 while(t--){
	 	int n;
	 	cin>>n;
	 	cout<<fibo(n)<<endl;
	 } 
	return 0;
	
}
