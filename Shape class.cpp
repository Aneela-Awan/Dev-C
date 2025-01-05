#include <iostream>
#include <string.h>
using namespace std;

class Shapes
{
    public:
    void calculateArea(int a,int b);
    void calculatePerimeterR(int a, int b);
    void calculatePerimeterT(int a, int b, int c);
};
class Rectangle : public Shapes
{
    public:
    void calculateArea(int a,int b){
           int area;
           area = a * b;
             cout<<"Area of Rectangle : "<<area<<endl;
          }
       void calculatePerimeterR(int a, int b){
           int perimeter;
           perimeter = 2 * (a + b);
             cout<<"Perimeter of Rectangle : "<<perimeter<<endl;
            }
};
class Triangle : public Shapes
{
    public:
    void calculateArea(int a,int b){
        float area;
        area = 0.5 * (a * b);
          cout<<"Area of the Triangle : "<<area<<endl;
         }
        void calculatePerimeterT(int a, int b, int c){
            int perimeter;
            perimeter = a + b + c;
              cout<<"Perimeter of the Triangle : "<<perimeter<<endl;
            }
};
int main() {
    Rectangle r;
    Triangle t;
    
    r.calculateArea(4, 5);
    r.calculatePerimeterR(4 , 5);
    
    t.calculateArea(4, 5);
    t.calculatePerimeterT(4 , 5 , 6);
}
