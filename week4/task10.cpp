#include <iostream>
using namespace std;

void add (int number1, int number2);
void multiply (int number1, int number2);
void divide (int number1, int number2);
void substract (int number1, int number2);

main()
{
int number1;
int number2;

cout << "Enter number1: ";
cin >> number1;
cout << "Enter number2: ";
cin >> number2;
add (number1,number2);
multiply (number1,number2);
divide (number1,number2);
substract (number1,number2);

add (number1,number2);
multiply (number1,number2);
divide (number1,number2);
substract (number1,number2);

}

void add (int number1, int number2){
int sum = number1+number2;
cout << "Sum is: " << sum << endl ;
}


void multiply (int number1, int number2){
int multiply = number1*number2;
cout << "Multiply is: " << multiply;
}


void divide (int number1, int number2){
int divide = number1/number2;
cout << "divide is: " << divide;
}


void substract (int number1, int number2){
int substract = number1-number2;
cout << "Substarct is: " << substract;
}



