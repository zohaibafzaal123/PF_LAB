#include <iostream>
using namespace std;

float priceTeller(string fruits, string days, float quantity);

main()
{
    string fruits;
    string days;
    float quantity;
    cout << "Enter name of  the fruit: ";
    cin >> fruits;
    cout << "Enter name of the day: ";
    cin >> days;
    cout << "Enter quantity of the fruits: ";
    cin >> quantity;
    float result = priceTeller(fruits, days, quantity);
    cout << "Total bill is " << result;
}

float priceTeller(string fruits, string days, float quantity)
{
    float price;
    if (days == "sunday" && fruits == "banana")
    {
        price = 2.70;
    }
    if (days == "sunday" && fruits == "apple")
    {
        price = 1.25;
    }
    if (days == "sunday" && fruits == "orange")
    {
        price = 0.90;
    }
    if (days == "sunday" && fruits == "grapefruit")
    {
        price = 1.60;
    }
    if (days == "sunday" && fruits == "kiwi")
    {
        price = 3.00;
    }
    if (days == "sunday" && fruits == "pineapple")
    {
        price = 5.60;
    }
    if (days == "sunday" && fruits == "grapes")
    {
        price = 4.20;
    }

    if (days != "sunday" && fruits == "banana")
    {
        price = 2.50;
    }
    if (days != "sunday" && fruits == "apple")
    {
        price = 1.20;
    }
    if (days != "sunday" && fruits == "orange")
    {
        price = 0.85;
    }
    if (days != "sunday" && fruits == "grapefruit")
    {
        price = 1.45;
    }
    if (days != "sunday" && fruits == "kiwi")
    {
        price = 2.70;
    }
    if (days != "sunday" && fruits == "pineapple")
    {
        price = 5.50;
    }
    if (days != "sunday" && fruits == "grapes")
    {
        price = 3.85;
    }
    price = price * quantity;
    return price;
}