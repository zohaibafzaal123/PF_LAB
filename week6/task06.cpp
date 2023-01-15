#include <iostream>
using namespace std;

float checkCost(string city, string product, int quantity);

main()
{
    string city;
    string product;
    int quantity;

    cout << "Enter the city name: ";
    cin >> city;
    cout << "Enter the product name: ";
    cin >> product;
    cout << "Enter the quantity: ";
    cin >> quantity;
    float result  = checkCost(city, product, quantity);
    cout << result << " is your total cost.";
}


float checkCost(string city, string product, int quantity)
{
    float price;

    if (city == "sofia")
    {
       if (product == "coffee")
       {
        price = 0.50 * quantity;
       }
       if (product == "water")
       {
        price = 0.80 * quantity;
       }
       if (product == "beer")
       {
        price = 1.20 * quantity;
       }
       if (product == "sweets")
       {
        price = 1.45 * quantity;
       }
       if (product == "peanuts")
       {
        price = 1.60 * quantity;
       }   
    }

    if (city == "plovdiv")
    {
       if (product == "coffee")
       {
        price = 0.40 * quantity;
       }
       if (product == "water")
       {
        price = 0.70 * quantity;
       }
       if (product == "beer")
       {
        price = 1.15 * quantity;
       }
       if (product == "sweets")
       {
        price = 1.30 * quantity;
       }
       if (product == "peanuts")
       {
        price = 1.50 * quantity;
       }   
    }
    if (city == "varna")
    {
       if (product == "coffee")
       {
        price = 0.45 * quantity;
       }
       if (product == "water")
       {
        price = 0.70 * quantity;
       }
       if (product == "beer")
       {
        price = 1.10 * quantity;
       }
       if (product == "sweets")
       {
        price = 1.35 * quantity;
       }
       if (product == "peanuts")
       {
        price = 1.55 * quantity;
       }   
    }
    return price;
}