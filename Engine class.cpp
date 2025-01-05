#include <iostream>
#include <string.h>
using namespace std;

class Engine{
    public:
        void startEngine(){
            cout<<"Engine started"<<endl;
          }
};
class DiselEngine : public Engine
{
    public:
    void dEngine(){
           cout<<"Disel Engine started"<<endl;
         }
};
class PetrolEngine : public Engine
{
    public:
    void pEngine(){
            cout<<"Petrol Engine started"<<endl;
          }
};
int main() {
    DiselEngine de;
    PetrolEngine pe;
    
    de.startEngine();
    de.dEngine();
    
    pe.startEngine();
    pe.pEngine();
}
