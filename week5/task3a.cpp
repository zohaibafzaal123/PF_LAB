#include <iostream>
using namespace std;

void isGreater(int number1, int number2);

main(){
int number1;
int number2;
cout << "Enter the first number: ";
cin >> number1;
cout << "Enter the second number: ";
cin >> number2;
isGreater(number1, number2);
}

void isGreater(int number1, int number2){
if(number2 < number1)
  {
  cout << "Greater number is " << number1;
  }
if(number2 > number1) 
  {
  cout << "Greater number is " << number2;
  }
}
