#include<iostream>
using namespace std;

class Circumference{
	private:
		float radius;
	public:
		void change(float r){
			radius = r;
		}
		void circum(){
		      cout<<"Circumference of Area\n"<<2*3.14*radius;
		  }
};
int main(){
	Circumference circum;
	float rad;
	cin>>rad;
	cout<<"Enter the radius: ";
	circum.circum();
}
