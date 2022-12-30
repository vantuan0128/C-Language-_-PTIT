#include <iostream>
using namespace std;

long ktfb(long long int n){
long long fn,f1=1,f0=0;
if(n==1||n==0)
    return 1;
for(int i=2;i<=92;i++){
    fn=f1+f0;
    f0=f1;
    f1=fn;
    if(fn==n)
        return 1;
}
return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		if(ktfb(n)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

