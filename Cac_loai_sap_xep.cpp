#include <iostream>
using namespace std;

void SelectionSort(int a[],int n){ //Sap xep chon
	for(int i=0;i<n-1;i++){
		int min_pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_pos]){
				min_pos=j;
			}
		}
		swap(a[i],a[min_pos]);
	}
}

void BubbleSort(int a[],int n){ //Sap xep noi bot
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

void InsertionSort(int a[], int n){ //Sap xep chen
	for(int i=1;i<n;i++){
		int x=a[i], pos=i-1;
		while(pos>=0 && x<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}

void CountingSort(int a[],int n){ //Sap xep dem phan phoi
	int cnt[1000001];
	int m=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		m=max(m,a[i]);
	}
	for(int i=0;i<=m;i++){
		if(cnt[i]!=0){
			for(int j=0;j<cnt[i];j++){
				cout<<i<<" ";
			}
		}
	}
}

void nhap(int a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	cout<<"NHAP LOAI SAP XEP:\n";
	cout<<"1 : Sap xep chon\n";
	cout<<"2 : Sap xep noi bot\n";
	cout<<"3 : Sap xep chen\n";
	cout<<"4 : Sap xep dem phan phoi\n";
	int t; cin>>t;
	return 0;
}
