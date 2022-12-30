#include<bits/stdc++.h> 
using namespace std; 

long long USCLN(long long a, long long b){
	if(b==0) return a;
	return USCLN(b,a%b); 
} 

long long BSCNN(long long a, long long b){ 
return a*b/USCLN(a,b); 
} 

long long solve(int n, int x, int y, int z){
	long long tmp=BSCNN(BSCNN(x,y),z); //boi chung 3 so x y z
	long long min= pow(10,n-1);
	long long res=(min+tmp-1)/tmp*tmp; //tim so nho nhat chia het cho tmp
	if(res<pow(10,n))//khong vuot qua gioi han max la dung
		return res;
		else return -1;
}

int main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		long long x,y,z,n; 
		cin>>x>>y>>z>>n; 
		cout<<solve(n,x,y,z)<<endl;
	} 
}
