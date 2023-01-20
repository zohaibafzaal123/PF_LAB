#include <iostream>
using namespace std;

main()
{
    char service;
    int minutes;
    char days;
    float price;

    cout << "Enter the service of the customer (p/r): ";
    cin >> service;
    cout << "Enter the number of minutes: ";
    cin >> minutes;

    if (service == 'r' && minutes > 50)
    {
        price = 10 + (minutes - 50) * 0.20;
    }
    if (service == 'r' && minutes < 50)
    {
        price = 10;
    }
    if (service == 'p')
    {
        cout << "Enter 'd' for day time and enter 'n' for night time: ";
        cin >> days;
    }

    if (service == 'p' && days == 'd' && minutes > 75)
    {
        price = 25 + (minutes - 75) * 0.10;
    }
    if (service == 'p' && days == 'd' && minutes < 75)
    {
        price = 25;
    }
    if (service == 'p' && days == 'n' && minutes > 100)
    {
        price = 25 + (minutes - 75) * 0.05;
    }
    if (service == 'p' && days == 'n' && minutes < 100)
    {
        price = 25;
    }

    cout << price << " $ is your total bill. ";
}