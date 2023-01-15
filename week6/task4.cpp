#include <iostream>
using namespace std;

float discount(string day, string month, int amount);

main()
{
    float amount;
    string day;
    string month;
    float result;
    cout << "Enter the total amount: ";
    cin >> amount;
    cout << "Enter the name of day in small letters: ";
    cin >> day;
    cout << "Enter the name of month in small letters: ";
    cin >> month;
    result = discount(day, month, amount);
    cout << "Your total amount after discount is: ";
    cout << result;
}

float discount(string day, string month, int amount)
{
    float payable;
    payable = amount;
    if (day == "sunday" || month == "october")
    {
        payable = amount - amount * 0.10;
    }
    return payable;
}