#include <iostream>
#include <string.h>
using namespace std;

class Person{
    public:
    void introduce(){
        cout<<"I am a person"<<endl;
         }
};
class Teacher : public Person
{
    public:
    void introduce(){
         cout<<"I am a Teacher"<<endl;
        }
};
class Student : public Person
{
    public:
    void introduce() {
         cout<<"I am a Student"<<endl;
         }
};
int main() {
    Person p;
    Teacher t;
    Student s;
    
    p.introduce();
    t.introduce();
    s.introduce();
}
