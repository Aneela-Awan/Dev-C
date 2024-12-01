 // Calulate the Area of circle and Circumference of circle  

#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	float radius , area , circumference;
	double Pi = 3.14159;
	
	cout<<"Enter the radius : "<<radius<<endl;
	cin>>radius;
	
	area= Pi*radius*radius;
	circumference= 2*Pi*radius;
	
	cout<<"Area of Circle : "<<area<<endl;
	cout<<"Circumference of Circle : "<<circumference<<endl;
	
	return 0;
}
