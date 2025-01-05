#include<iostream>
using namespace std;
class Pen{
	public:
		string color , brand;
		
		void show(){
			cout<<"Color: "<<color<<"\nBrand: "<<brand<<endl;
		}
};
main(){
	Pen p1;
	p1.color="Blue";
	p1.brand="Dollar";
	p1.show();
}
