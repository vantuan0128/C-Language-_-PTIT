#include<iostream>
#include<string.h>
#include<list>
// danh sach nhan vien
using namespace std;
struct Employee {
char name[25]; // Tên nhân viên
int age; // Tuoi nhân viên
};
main(){
	Employee x;
	list <Employee> d;
	list <Employee> ::iterator p;
	cout<<"\n name,age: ";
	cin>>x.name>>x.age;
	d.push_back(x);
	cout<<"\n name,age: ";
	cin>>x.name>>x.age;
	d.push_back(x);
	cout<<"\n name,age: ";
	cin>>x.name>>x.age;
	d.push_back(x);
	for(p=d.begin();p!=d.end();++p)
	cout<<"\n "<<p->name<<"\n "<<p->age;
	
}

