#include <iostream> 
using namespace std;

void isEqual(int number1, int number2);

main()
{

int number1;
int number2; 
cout << "Enter the number1: ";
cin >> number1 ;
cout << "Enter the number2: ";
cin >> number2 ;
isEqual(number1,number2);

}


void isEqual(int number1, int number2)
{
     if(number1 = number2)
      {
      cout << "TRUE" << endl;
      }
      if(number1 != number2)
      {
      cout << "FALSE" << endl;
      } 
}
