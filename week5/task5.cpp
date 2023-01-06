#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

string isEvenish(int number);

main(){
int number;
cout << "Enter the number of five digits: ";
cin >> number;
string result = isEvenish(number);
cout << result;
}


string isEvenish(int number)
{
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
int sum = digit1 + digit2 +digit3 +digit4 +digit5;
if(sum % 2 == 0 )
  {
 return "Evenish";
  }
if(sum % 2 != 0 )
  {
 return "Oddish";
  }
}