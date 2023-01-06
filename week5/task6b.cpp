#include <iostream>
using namespace std;

string textConverter1(int number1);
string textConverter2(int number2);

main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int number1 = number / 10;
    int number2 = number % 10;

    string result1 = textConverter1(number1);
    string result2 = textConverter2(number2);
    cout << result1 << " " << result2;
}

string textConverter1(int number1)
{
    string result1;

    if (number1 == 2)
    {
        string result1 = "twenty";
    }
    if (number1 == 3)
    {
        string result1 = "thirty";
    }
    if (number1 == 4)
    {
        string result1 = "fourty";
    }
    if (number1 == 5)
    {
        string result1 = "fifty";
    }
    if (number1 == 6)
    {
        string result1 = "sixty";
    }
    if (number1 == 7)
    {
        string result1 = "seventy";
    }
    if (number1 == 8)
    {
        string result1 = "eighty";
    }
    if (number1 == 9)
    {
        string result1 = "ninty";
    }
    if (number1 == 1)
    {
        string result1 = "You have entered an invalid number";
    }
    return result1;
}

string textConverter2(int number2)
{
    string result1;
    if (number2 == 1)
    {
        string result1 = "one";
    }
    if (number2 == 2)
    {
        string result1 = "two";
    }
    if (number2 == 3)
    {
        string result1 = "three";
    }
    if (number2 == 4)
    {
        string result1 = "four";
    }
    if (number2 == 5)
    {
        string result1 = "five";
    }
    if (number2 == 6)
    {
        string result1 = "six";
    }
    if (number2 == 7)
    {
        string result1 = "seven";
    }
    if (number2 == 8)
    {
        string result1 = "eight";
    }
    if (number2 == 9)
    {
        string result1 = "nine";
    }
    return result1;
}