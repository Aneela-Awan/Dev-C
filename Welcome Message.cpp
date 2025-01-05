#include <iostream>
using namespace std;

class Message{
    public:
    void printMessage(){
        cout<<"Welcome to OOP"<<endl;
    }
};
int main() {
   Message obj;
   obj.printMessage();

}
