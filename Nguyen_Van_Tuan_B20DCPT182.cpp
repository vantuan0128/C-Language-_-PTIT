#include <bits/stdc++.h>
using namespace std;

class thoigian{
	private:
		int ngay;
		int gio;
	public:	
		thoigian(){
			ngay=0,gio=0;
		}
		thoigian(int d, int h){
				ngay=d;gio=h;
			}
		void nhapbp(){
				cin>>ngay>>gio;
			}
		void xemmh(){
				cout<<ngay<<" "<<gio<<endl;
			}
		void rutgon(){
			while(gio>24){
				gio=gio-24;
				ngay=ngay+1;
			 if(gio==24){
				gio=0;
				ngay=ngay+1;
				break;
				}
			}
		} 
		friend thoigian operator + (const thoigian x, const thoigian y){
			thoigian c;
			c.ngay=x.ngay+y.ngay;
			c.gio=x.gio+y.gio;
			return c;
		} 
		friend thoigian operator - (const thoigian x, const thoigian y){
			thoigian c;
			c.ngay=x.ngay-y.ngay;
			c.gio=x.gio-y.gio;
			return c;
		} 
		thoigian operator * (int x)
        {
            thoigian c;
            c.ngay=ngay*x;
            c.gio=gio*x;
            c.rutgon();
            return c;
        }
        thoigian operator / (int x)
        {
            thoigian c;
            c.ngay=ngay/x;
            c.gio= gio/x;
            c.rutgon();
            return c;
        }
};

int main(){
	thoigian a,b(2,10),c;
	a.nhapbp(); a.rutgon(); a.xemmh();
	c=a+b; c.xemmh(); 
	c=a-b; c.xemmh(); 
	c=a*2;c.xemmh();
	c=a/2;c.xemmh();  
	return 0;
}
