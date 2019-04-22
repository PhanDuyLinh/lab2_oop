#include <iostream>
#include <math.h>
#include <stdbool.h>
using namespace std;
class MyUtil
{
    public:
 static long factorial(int num)
            {
             long result=1;
             for(int i=2;i<=num;i++)
             {
                 result*=i;
             }
             return result;
            }
static bool isPrime(long number)
            {
             long numberSqrt = (long)sqrt(number);
             bool result = true;
             for(int i=2; i<numberSqrt && result; i++)
               if(number%i==0)
               {
                   result = false;
               }
            return result;
            }
static bool isTriangle(double num1, double num2, double num3)
            {
            return (num1<(num2+num3) && num2<(num1+num3) && num3<(num2+num1));
            }
};


    int main()
{
    double a = 12, b = 2, c = 8;
    cout << "12, 2 and 8 create a triangle is: " << MyUltil::isTriangle(12,2,8);
    cout << "\nThe factorial of 6 is : " << MyUltil::factorial(6);
    cout << "\nSaying that 17 is a prime number is "<< MyUltil::isPrime(17);
    return 0;
}


