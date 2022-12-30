#include <iostream>
using namespace std;

void XnpKt(int x[], int n){
	for(int i=1;i<=n;i++){
	x[i]=0;
	}
	while(1){
		for(int i=1;i<=n;i++){
			cout<<x[i];
		}
		cout<<" ";
		int i=n;
		while(i>=1&&x[i]==1){
			x[i]=0;
			i--;
		}
		if(i==0) return ;
		else x[i]=1;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
	int x[1000];
	int n;
	cin>>n;
	XnpKt(x,n);
	cout<<endl;
	}	
	return 0;
}
