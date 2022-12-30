#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
	
	int n;
	cin>>n;
	int a[n];
	priority_queue<int>pq;
	for(int i=0;i<n;i++){
		cin>>a[i];
		pq.push(a[i]);
	}
	long long s=0;
	int t=0;
	while(t<3){
		s+=pq.top();
		pq.pop();
		t++;
	}
	cout<<s<<endl;
}
}
