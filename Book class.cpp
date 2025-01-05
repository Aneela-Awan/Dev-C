#include<iostream>
#include<string.h>
using namespace std;

class Book{
    public:
		string title, author;
		double price;
	    
		void showBookDetails(){
			cout<<"Book Title: "<<title<<endl;
			cout<<"Author : "<<author<<endl;
			cout<<"Price: "<<price<<endl;
			}
};
int main(){
	Book b1;
	b1.title="C++ programming";
	b1.author="Bjarne stroustrup";
	b1.price=499.98;
	cout<<"\n--------Details of Book1--------- "<<endl;
	b1.showBookDetails();

}
