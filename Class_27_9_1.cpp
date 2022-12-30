#include <iostream>
using namespace std;
class chunhat { //entity 
	private: // bien de private
		float dai,rong,dt;
		void dientich(); //tinh xong gan cho dai rong dt
	public:
		chunhat(){dai=0;rong=0;} 		   //ham khoi tao ngam dinh, trung voi ten lop
		chunhat(float d, float r){
			dai=d;rong=r; //truy nhap tu ben trong
			dientich();
		}
		void nhap()
			{cin>>dai>>rong; // khai bao va dinh nghia trong lop //Interface
			dientich(); // nhap vao la tinh luon
			} 
		//float dientich(); // khai bao nguyen mau ham
		float xemdt(){ return dt;} //truong hop ham de private
};
/* float  chunhat::dientich() // bao ham dien tich thuoc lop chu nhat
	{	float dt=dai*rong;
		return dt;
} */

void  chunhat::dientich() 
	{	dt=dai*rong;
} 

main(){ //control 
	chunhat x(20,10); 
	x.nhap(); // loi goi ham, truy nhap tu ben ngoai
	cout<<"\n dien tich hinh cn X="<<x.xemdt();
}
