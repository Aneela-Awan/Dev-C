#include <iostream>
#include <string.h>
using namespace std;

class Employee{
    public:
    void work(){
            cout<<"Works and gives tasks to Intern"<<endl;
          }
};
class Manager : public Employee
{
    public:
    void order(){
           cout<<"Orders employees to do work"<<endl;
         }
};
class Intern : public Employee
{
    public:
    void works(){
            cout<<"Works on the tasks assigned by employee"<<endl;
          }
};
int main() {
    Employee e;
    Manager m;
    Intern i;
    
    e.work();
    m.order();
    i.works();
}
