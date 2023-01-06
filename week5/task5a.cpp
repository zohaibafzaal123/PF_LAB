#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main(){
int number1;
int number2;
cout << "Enter the first number: ";
cin >> number1;
cout << "Enter the second number: ";
cin >> number2;
int result = pow(number1, number2);
cout << "Squared number is " << result;
}