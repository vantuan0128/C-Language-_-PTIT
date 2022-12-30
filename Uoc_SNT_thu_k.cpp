#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long N,k;
		cin>>N>>k;
		int dem=0,c=0;
		for(int i=2;i<=N;i++){
			while(N%i==0){
				dem++;
				if(dem==k){
					cout<<i<<endl;
					c++;
					break;
				}
				N/=i;
			}
			if(c==1) break;
		}
		if(c<1) cout<<"-1"<<endl;
	}
	return 0;
}

