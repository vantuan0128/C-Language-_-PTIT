#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char a[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		double tong=0;
		int i,j;
		char c[15];
		for(i=0;i<15;i++){
			cin>>c[i];
		}
		if(x==101){
		for(i=0;i<15;i++){
			for(j=i;j<=i;j++){
				if(c[i]==a[j]){
					tong+=(double)10/15;
				}
			}
		}
	}
		if(x==102){
			for(i=0;i<15;i++){
				for(j=i;j<=i;j++){
					if(c[i]==b[j]){
						tong+=(double)10/15;
					}
				}
			}
		}
		cout<<fixed<<setprecision(2)<<tong<<endl;
	}
	return 0;
	
}
