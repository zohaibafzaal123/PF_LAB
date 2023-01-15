#include<iostream>
using namespace std;

float checkCost(string city,string product,int quantity);

main()
{
    float res,quantity;
    string city,product;
    cout << "Enter the city name : ";
    cin >> city;
    cout << "Enter the product name : ";
    cin >> product;
    cout << "Enter the number of quantities : ";
    cin >> quantity;
    res = checkCost(city,product,quantity);
    cout << "Cost : " << res;
}

float checkCost(string city,string product,int quantity)
{
    float cost;
    if (city ==  "sofia")
    {
        if(product == "coffee")
        {
            cost = 0.5*quantity;
        }
        else if(product == "water")
        {
            cost = 0.8*quantity;
        }
        else if(product == "beer")
        {
            cost = 1.2*quantity;
        }
        else if(product == "sweets")
        {
            cost = 1.45*quantity;
        }
        else if(product == "peanuts")
        {
            cost = 1.6*quantity;
        }
    }
    if (city ==  "plovdiv")
    {
        if(product == "coffee")
        {
            cost = 0.4*quantity;
        }
        else if(product == "water")
        {
            cost = 0.7*quantity;
        }
        else if(product == "beer")
        {
            cost = 1.15*quantity;
        }
        else if(product == "sweets")
        {
            cost = 1.3*quantity;
        }
        else if(product == "peanuts")
        {
            cost = 1.5*quantity;
        }
    }
    if (city ==  "varna")
    {
        if(product == "coffee")
        {
            cost = 0.45*quantity;
        }
        else if(product == "water")
        {
            cost = 0.7*quantity;
        }
        else if(product == "beer")
        {
            cost = 1.1*quantity;
        }
        else if(product == "sweets")
        {
            cost = 1.35*quantity;
        }
        else if(product == "peanuts")
        {
            cost = 1.55*quantity;
        }
    }
    return cost;
}