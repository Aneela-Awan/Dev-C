#include<iostream>
using namespace std;
class Rectangle{
	private:
	double length, width;
	public:
	Rectangle (double len , double wid){
		length = len;
		width = wid;
	}
	double area(){
		return length * width;
	}
};
main(){
	Rectangle rec(5.45 , 3.56);
	cout<<"Area of Rectangle is "<<endl;
}
