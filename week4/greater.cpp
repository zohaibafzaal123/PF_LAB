#include <iostream>
using namespace std;

void maximum(int number1, int number2);
void minimum(int number1, int number2);
void equal(int number1, int number2);


main()
{
int choice;
int number1;
int number2;
while (true)
      {
       cout << "Enter the number1: ";
       cin >> number1 ;
       cout << "Enter the number2: ";
       cin >> number2 ;
       cout << "Enter choice (1-3): ";
       cin >> choice;
    if (choice == 1)
      {
      maximum(number1,number2);
      }
    if (choice == 2)
      {
      minimum(number1,number2);
      }
    if (choice == 3)
     {
     equal(number1,number2);
      }
     }
}


void maximum(int number1, int number2)
{     if(number1>number2)
      {
      cout << "The greater number is: " << number1 << endl;
      }
      if(number1<number2)
      {
      cout << "The greater number is: " << number2 << endl;
      } 
}

void minimum(int number1, int number2)
{
      if(number1 < number2)
      {
      cout << "The minimum number is: " << number1 << endl;
      }
      if(number1>number2)
      {
      cout << "The minimum number is: " << number2 << endl;
      } 

}

void equal(int number1, int number2)
{
     if(number1 = number2)
      {
      cout << "The numbers are equal: " << number1 << endl;
      }
      if(number1 != number2)
      {
      cout << "The numbers are not equal: " << number2 << endl;
      } 
  
}