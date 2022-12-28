#include<iostream>
using namespace std;
main()
{
int four_digit_number;
int number1;
int number2;
int number3;
int number4;
int num1;
int num2;
int num3;
int sum ;
cout << "Enter four Digit Number: ";
cin >> four_digit_number;
number1 =  four_digit_number % 10;
num1 =  four_digit_number / 10;
number2 = num1 % 10;
num2 = num1 / 10;
number3 = num2 % 10;
num3 = num2 /10;
number4 = num3 % 10;
sum = number1+number2+number3+number4;
cout << "Sum is: " << sum ;
}
