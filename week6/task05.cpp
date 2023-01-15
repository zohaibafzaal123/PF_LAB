#include <iostream>
using namespace std;

float lowestprice(float travel, string period);

main()
{
    float travel;
    string period;
    float price;
    float result;
    cout << "Enter the travelling kilometers: ";
    cin >> travel;
    cout << "Enter the period (day or night): ";
    cin >> period;
    result  = lowestprice(travel, period);
    cout << result << " is your total cost.";
}

float lowestprice(float travel, string period)
{
    float price;

    if (period == "day" && travel < 20)
    {
        price = travel * 0.79 * 0.70;
        
    }

    if (period == "night" && travel < 20)
    {
        price = travel * 0.90 * 0.70;
        
    }

    if (((period == "day" || period == "night")) && travel >= 20)
    {
        price = travel * 0.09;
        
    }

    if (((period == "day" || period == "night")) && travel >= 100)
    {
        price = travel * 0.06;
        
    }
    return price;
}