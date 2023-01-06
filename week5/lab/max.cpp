#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int add (int number1,int number2);

main()
{
system("cls");
int number1;
int number2;
int result;
int result1;
cout << " Enter First number: " ;
cin >> number1 ;
cout << " Enter Second number: " ;
cin >> number2 ;
result = add (number1,number2);
cout << "Sum is: " << result << endl; 

result = max (number1,number2);
cout << result << " is greater " << endl;

}

int add (int number1,int number2)
{
int sum = number1 + number2;
return sum;
}

