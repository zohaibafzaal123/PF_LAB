#include <iostream>
using namespace std;



main()
{
    int number1;
    int number2;
    int number3;
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "Enter number :";
    cin >> number3;


    if(number1 > number2 && number1 > number3)
    {
        cout << number1 << " is the greater number.";
    }
    if(number2 > number1 && number2 > number3)
    {
        cout << number2 << " is the greater number.";
    }
    if(number3 > number1 && number3 > number1)
    {
        cout << number3 << " is the greater number.";
    }
}