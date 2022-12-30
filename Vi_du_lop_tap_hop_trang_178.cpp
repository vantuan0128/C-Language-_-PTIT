#include<iostream>
#include<set> 
using namespace std;
main(){
set<char> mySet; //kieu cac phan tu la kieu chu
int function;
do{
	cout << "CAC CHUC NANG:" << endl;
	cout << "1: Them mot phan tu vao tap hop" << endl;
	cout << "2: Loai bo mot phan tu khoi tap hop" << endl;
	cout << "3: Xem tat ca cac phan tu cua tap hop" << endl;
	cout << "5: Thoat!" << endl;
	cout << "=====================================" << endl;
	cout << "Chon chuc nang: " << endl;
	cin >> function;
	switch(function){
		case 1: 
			char phantu;
			cout << "Ki tu them vao: ";
			cin >> phantu;
			mySet.insert(phantu);
			break;
		case 2: 
			cout << "Loai bo ki tu: " << endl; 
			cin >> phantu;
			mySet.erase(phantu);
			break;
		case 3: 
			cout<<"Cac phan tu cua tap hop la:"<<endl;
			set<char>::iterator i;
			for(i=mySet.begin(); i!=mySet.end(); i++) // con tro khong co bang
			cout << *i << " ";
			break;
		}
	}while(function != 5);
	}

