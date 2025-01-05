#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Input any Integer: "<<endl;
	cin>>num;
	
	if(num % 2 == 0){
		cout<<"This is Even. "<<endl;
	}
	else{
		cout<<"This is Odd. "<<endl;
	}
	return 0;
}
