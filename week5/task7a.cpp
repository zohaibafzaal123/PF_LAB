#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main(){
int number1;
cout << "Enter the number: ";
cin >> number1;
float result = sin(number1);
cout << "Sine of number is " << result;
}