#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int add(int, int);

main()
{
int number1;
int number2;
int result ;
float cube;
float number3;
int ciel;
int flor;

int exponent;
cout << "Enter the first number: ";
cin >> number1;
cout << "Enter the second number: ";
cin >> number2;
cout << "Enter the third number: ";
cin >> number3;
result = min(number1, number2);
cout << result  << " is minimum" << endl;
exponent = pow(number1, number2);
cout << exponent << " is answer" << endl;
cube = cbrt(number1);
cout << cube << " is cubeRoot" << endl;
ciel = ceil(number3);
cout << ciel << " is ceiled" << endl;
flor = floor(number3);
cout << flor << " is floored" << endl;

}



int add(int number1, int number2)
  {
  int sum = number1 + number2;
  return sum;
  }