#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;


main()
{
int a = 5;
int b = 6;
int c = 1;
int exponent = pow(b, 2);
int value3 = 4 * a * c;
float squareRoot = sqrt(exponent  - value3);
float dividend = 2*a;
float value1 = (-b + squareRoot )/ dividend ;
float value2 = (-b - squareRoot ) / dividend ;
cout << value1 << endl;
cout << value2 << endl; 
}