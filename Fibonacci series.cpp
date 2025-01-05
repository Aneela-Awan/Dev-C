#include<iostream>
using namespace std;

int main(){
	int number;
	cout<<"Enter the terms : ";
	cin>>number;
	
	int Array[number];
	Array[0] = 0;
	Array[1] = 1;
	
	for(int i=2; i<number; i++){
		Array[i] = Array[i-1] + Array[i-2];
	} 
	cout<<"Displaying Fibonacci series \n"<<endl;
	
	for(int i=0; i<number; i++){
		cout<<Array[i]<<" ";
	}
	cout<<"\n";
	
	return 0;
}
