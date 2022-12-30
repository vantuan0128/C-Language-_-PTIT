#include <iostream>
#include <math.h>> 
using namespace std;

int demChanLe(int n){
	int chan=0,le=0;
	int N;
	while(n>0){
		N=n%10;
		if(N%2==0) chan++;
		else {
		le++; } 
		n/=10; 
	}
	if(chan==le) return 1;
	else return 0; 
} 

int main(){
	int t;
	cin>>t;
	long min=pow(10,t-1),max=pow(10,t)-1;
	int i;
	int dem=0;
	for(i=min;i<=max;i++){
		if(demChanLe(i)==1){
			cout<<i<<' ';
			dem++;
		} 
		if(dem%10==0) cout<<endl;
	} 
	return 0;
	
}
