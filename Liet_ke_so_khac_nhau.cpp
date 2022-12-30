#include <iostream>
#include <set>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	set <int>::iterator it;
	set<int> v;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		v.insert(x);
	}
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<' ';
	}
	return 0;
}
