#include<iostream>
using namespace std;
class Calculator{
	public:
		int add(int a ,int b){
			return a+b;
		}
		int sub(int a ,int b){
			return a-b;
		}
		int multi(int a, int b){
			return a*b;
		}
		double div(double a, double b){
			if(a != 0){
				return a/b;
			}
			else{
				cout<<"Erorr: division by zero is not allowed."<<endl;
				return 0;
			}
		}
};
main(){
	Calculator cal;
	cout<<"Sum(int): "<<cal.add(6,8)<<endl;
	cout<<"Sub(int): "<<cal.sub(4,6)<<endl;
	cout<<"Multi(int): "<<cal.multi(2,3)<<endl;
	cout<<"Div(double): "<<cal.div(2,4)<<endl;
}
