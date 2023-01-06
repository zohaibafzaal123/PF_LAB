#include <iostream>
using namespace std;

void sum(int number1, int number2);

main(){
int number1;
int number2;
cout << "Enter the first number: ";
cin >> number1;
cout << "Enter the second number: ";
cin >> number2;
sum(number1, number2);
}

void sum(int number1, int number2){
int result = number1 + number2;
cout << "Sum is " << result;
}