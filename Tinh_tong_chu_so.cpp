#include <iostream> 
using namespace std; 
 
void Rutgon(int a) { 
	int b=0; 
	while (a>0) { 
		b+=a%10; 
		a/=10; 
	} 
		a=b; 
} 

int main() { 
	int N; 
	cin>>N; 
	while(N--) { 
		int a; 
		cin>>a; 
		while (a>9) {
		Rutgon(a);
		}
		cout<<a<<endl; 
		} 
	return 0; 
}
