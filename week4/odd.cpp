#include <iostream>
using namespace std;

void isEven(int number);

main()
{
   int number1;
   while (true)
        {
        cout << "Enter your number: ";
        cin >> number1;
        isEven(number1);
        }
}


void isEven(int number)
{
   if(number % 2 == 0) 
     {
     cout << "The number is even." << endl;
     }
   if(number % 2 != 0) 
     {
     cout << "The number is odd." << endl;
     }
}