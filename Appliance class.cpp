#include <iostream>
#include <string.h>
using namespace std;

class Appliance
{
    public:
        void operate(){
            cout<<"This appliance is working"<<endl;
           }
};

class WashingMachine : public Appliance
{
    public:
     void washingMachine(){
           cout<<"Washing Machine"<<endl;
         }
};

class Refrigerator : public Appliance
{
    public:
    void refrigerator(){
            cout<<"Refrigerator"<<endl;
         }
};

int main() {
    WashingMachine wm;
    Refrigerator r;
    
    wm.washingMachine();
    wm.operate();
    
    r.refrigerator();
    r.operate();
}
