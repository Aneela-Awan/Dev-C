#include<iostream>
using namespace std;
class Animal{
	public:
		void makeSound(){
			cout<<"This animals make sound."<<endl;
		}
};
class Cat : public Animal
{
	public:
		void Meow(){
			cout<<"Meow Meow\n";
		}
};
class Dog : public Animal
{
	public:
		void Bark(){
			cout<<"Bark\n";
		}
};
int main(){
	Cat c;
	Dog d;
	
	c.Meow();
	c.makeSound();

    d.Bark();
	d.makeSound();
}
