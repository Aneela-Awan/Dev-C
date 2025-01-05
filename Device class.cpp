#include <iostream>
#include <string.h>

using namespace std;

class Device
{
    public:
    void turnOn(){
            cout<<"Device turned on"<<endl;
          }
};
class Smartphone : public Device
{
    public:
    void sDevice(){
           cout<<"Smartphone turned on"<<endl;
         }
};
class Laptop : public Device
{
    public:
    void lDevice(){
            cout<<"Laptop turned on"<<endl;
         }
};
int main() {
    Smartphone s;
    Laptop l;
    
    s.turnOn();
    s.sDevice();
    
    l.turnOn();
    l.lDevice();
}
