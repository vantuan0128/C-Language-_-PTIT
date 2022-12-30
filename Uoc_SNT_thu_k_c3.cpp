#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[100]={0};
		long long N,k;
		cin>>N>>k;
		int dem=0;
		for(int i=2;i<=N;i++){
			while(N%i==0){
				a[dem]=i;
				dem++;
				N/=i;
			}
		}
		if(a[k-1]!=0) cout<<a[k-1]<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
