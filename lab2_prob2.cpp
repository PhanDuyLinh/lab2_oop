#include <iostream>
#include <conio.h>
using namespace std;
class Rectangle
{
private:
    double width, height;
public:
    Rectangle (double x, double y);
    double perimeter();
    double area();
};

int main()
{
    Rectangle rec1(23,20);
    Rectangle rec2(40,50);
   cout << "\narea of rec1 is :"<< rec1.area();
   cout << "\narea of rec2 is :"<< rec2.area();

}
Rectangle::Rectangle(double x,double y)
{
    width = x;
    height = y;
}
double Rectangle::perimeter()
       {
           return 2*(width + height);
       }
double Rectangle::area()
       {
         return width * height;
       }

