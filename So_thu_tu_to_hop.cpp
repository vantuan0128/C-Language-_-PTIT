#include <bits/stdc++.h>
using namespace std;
int n,k,x[20],a[20],ok,dem;
long tohop(int n, int k){
	if(k==n||k==0) return 1;
	else return tohop(n-1,k)+tohop(n-1,k-1);
}
bool check(){
	for(int i=1;i<=k;i++){
		if(x[i]!=a[i]) return false;
	}
	return true;
}
void sinh(){
	while(!ok){
		int i=k;
		while(i>=1&&x[i]==n-k+i){
			i--;
		}
		if(i==0){
			ok=1; cout<<tohop(n,k);
		}
		else{
			x[i]++;
			for(int j=i+1;j<=k;j++){
				x[j]=x[j-1]+1;
			}
			dem--;
			if(check()){
				ok=1; cout<<dem;
			}
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=k;i++) x[i]=i;
	for(int i=1;i<=k;i++) cin>>a[i];
	dem=tohop(n,k);ok=0;
	sinh();
	return 0;
}
