#include <iostream>
#include <string.h>
using namespace std;

class Parent{
    protected:
    int Age;
    string Name;
};
class Child : public Parent
{
    public:
    void name(string n){
        Name = n;
          cout<<"Name : "<<n<<endl;
          }
        void age(int a)
          {
             Age = a;
               cout<<"Age : "<<a<<endl;
        }
};
int main() {
    Child c;
    
    c.name("Aneela");
    c.age(20);
}
