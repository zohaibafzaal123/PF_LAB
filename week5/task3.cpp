#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

bool isSymmetrical(int number);
main()
{
int number;
cout << "Enter the number: ";
cin >> number ;
isSymmetrical(number);
}


bool isSymmetrical(int number)
{
int digit1;
int remainder1;
int digit2;
int remainder2;
int digit3;
int remainder3;
int digit4;
int remainder4;
int digit5;
int remainder5;
digit1 = number / 10 ;
remainder1 = number % 10;
digit2 = digit1 / 10 ;
remainder2 = remainder1 % 10;
digit3 = digit2 / 10;
remainder3 = remainder2 % 10;

if (digit1 == digit5)
{
cout << "Is symmetrical." << endl;
}
if (digit1 != digit5)
{
cout << "Is not symmetrical." << endl;
}

}