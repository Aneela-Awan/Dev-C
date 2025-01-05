#include<iostream>
using namespace std ;

class Shape{
	public:
		void draw(){
			cout<<"Shapes drawn below : ";
		}
};
class Circle : public Shape 
{    
      public:
      	void circle(){
      		cout<<"()\n";
		  }
};
class Square : public Shape
{
	public:
		void square(){
			cout<<"[]\n";
		}
};
int main(){
	Circle c;
	Square s;
	
	c.circle();
	s.square();
}
