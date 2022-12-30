#include <iostream>
#include <set>
using namespace std;
int main(){
	int t,i;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100000];
		multiset<int> v;
		multiset<int>::iterator it;
		for(int i=0;i<n;i++){
			int x; cin>>x;  v.insert(x);
		}
		for(int i=0;i<n;i++){
			for(it=v.begin();it!=v.end();it++){
				if(a[i]==*it) a[i]=i;
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
