#include <iostream>
using namespace std;

class Vehicle{
    public:
    void start(){
            cout<<"The vehicle is started\n";
         }
};
class Car : public Vehicle
{
    public:
    void drive(){
            cout<<"The car is driving\n";
          }
};
class Bike : public Vehicle
{
    public:
    void drive(){
            cout<<"The bike is driving\n";
          }
};
int main() {
    Car c;
    Bike b;
    
    c.start();
    c.drive();
    
    b.start();
    b.drive();
}
