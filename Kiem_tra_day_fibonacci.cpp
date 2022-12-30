#include <iostream>
using namespace std;

int ktfb(int n){
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
		int a[1000];
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(ktfb(a[i])==1) cout<<a[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
