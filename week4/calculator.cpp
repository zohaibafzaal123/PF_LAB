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
char operation;
 while(true)
 { 
   cout << "Enter number1: ";
   cin >> number1;
   cout << "Enter number2: ";
   cin >> number2;
   cout << "Enter operator (+,-,/,*): ";
   cin >> operation;
 
   if(operation == '+')
   {
   add (number1,number2);
   }


   if(operation == '*')
   {
   multiply (number1,number2);
   }


   if(operation == '/')
   {
   divide (number1,number2);
   }


   if(operation == '-')
   {
   substract (number1,number2);
   }
 }

}


void add (int number1, int number2){
int sum = number1+number2;
cout << "Sum is: " << sum << endl ;
}


void multiply (int number1, int number2){
int multiply = number1*number2;
cout << "Multiply is: " << multiply << endl;
}


void divide (int number1, int number2){
int divide = number1/number2;
cout << "divide is: " << divide << endl;
}


void substract (int number1, int number2){
int substract = number1-number2;
cout << "Substarct is: " << substract << endl;
}



