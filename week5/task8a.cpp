#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void heightCalculate(float radian, int base);

main()
{
float degree;
int base;
float radain;
cout << "Enter the angle in degrees: ";
cin >> degree;
cout << "Enter the base: " ;
cin >> base;
radain = degree / 57.2958;
heightCalculate(radain, base); 


}

void heightCalculate(float radian, int base){
float height = tan(radian) * base;
cout << "Height is " << height;
}