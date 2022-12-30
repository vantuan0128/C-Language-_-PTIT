#include <iostream>
using namespace std;
class chunhat { 
	private: // bien de private
		float dai,rong,dt;
	public:
		chunhat(){dai=0;rong=0;} 		   //ham khoi tao ngam dinh, trung voi ten lop
		chunhat(float d, float r){
			dai=d;rong=r; //truy nhap tu ben trong
		}
		void nhap()
			{cin>>dai>>rong; } // khai bao va dinh nghia trong lop
		float dientich(); // khai bao nguyen mau ham
};
float  chunhat::dientich() // bao ham dien tich thuoc lop chu nhat
	{	float dt=dai*rong;
		return dt;
}
main(){ 
	chunhat x,y(20,10),z; //x goi dong 7, y goi dong 8
	x.nhap(); // loi goi ham, truy nhap tu ben ngoai
	cout<<"\n dien tich hinh cn X="<<x.dientich();
	//cout<<x.dai; //truy nhap tu ben ngoai // loi do dai la private
}
