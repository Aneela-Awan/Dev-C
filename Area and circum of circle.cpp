#include<iostream>
using namespace std;

int main(){
	double area, circumference, radius;
	const float Pi = 3.14;
	
	cout<<"Enter the radius : "<<radius<<endl;
	cin>>radius;
	
	area = Pi*radius*radius;
	circumference = 2*Pi*radius;
	
	cout<<"Area of circle : "<<area<<endl;
	cout<<"Circumference of circle : "<<circumference<<endl;
	
	return 0;
}
