#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

string isSymmetrical(int number);


main()
{
string result;
int number;
cout << "Enter the number of five digits: ";
cin >> number;
cout <<  isSymmetrical(number);

}


string isSymmetrical(int number){
int digit1;
int quotient1;
int digit2;
int quotient2;
int digit3;
int quotient3;
int digit4;
int quotient4;
int digit5;
digit1 = number % 10;
quotient1 = number / 10;
digit2 = quotient1 % 10;
quotient2 = quotient1 / 10;
digit3 = quotient2 % 10;
quotient3 = quotient2 / 10;
digit4 = quotient3 % 10;
quotient4 = quotient3 / 10;
digit4 = quotient3 % 10;
quotient4 = quotient3 / 10;
digit5 = quotient4 % 10;
if(digit1 == digit5 )
  {
 return "true";
  }
if(digit1 != digit5)
  {
 return "false";
  }


}