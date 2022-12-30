#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	while(x--){
		int n;
		cin>>n;
		int arr[n];
		map<int,int>mp;
		int ok=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			mp[arr[i]]++;
			if(mp[arr[i]]==2&&ok==0){
			cout<<arr[i]<<endl;
			ok=1;			
		}
		}
		if(ok==0){
			cout<<"-1"<<endl;
			break; 
		}
}
}
