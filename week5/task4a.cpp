#include <iostream>
#include <windows.h>
using namespace std;

main(){
int number1;
int number2;
cout << "Enter the first number: ";
cin >> number1;
cout << "Enter the second number: ";
cin >> number2;
int result = min(number1, number2);
cout << "Minimum number is " << result;
}