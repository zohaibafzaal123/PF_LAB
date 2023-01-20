#include <iostream>
using namespace std;

float priceAppartment(string month, int days);
float priceStudio(string month, int days);

main()
{
    string month;
    int day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the number of days stayed: ";
    cin >> day;

    float result1 = priceAppartment(month, day);
    float result2 = priceStudio(month, day);
    cout << "Apppartment:  " << result1 << "$" << endl;
    cout << "Studio:  " << result2 << "$";
}

float priceStudio(string month, int day)
{
    float finalprice;
    float price;
    
    if ((month == "may" || month == "october") && (day < 14 && day > 7))
    {
        price = 50.0 * day;
        finalprice = price - (0.05 * price);
    }
    if ((month == "may" || month == "october") && day > 14)
    {
        price = 50 * day;
        finalprice = price - (0.30 * price);
    }
    if ((month == "june" || month == "september") && day > 14)
    {
        price =  75.20 * day;
        finalprice = price - (0.20 * price);
    }
    if ((month == "june" || month == "september") && (day < 14 && day > 7))
    {
        price = 75.20 * day;
        finalprice = price ;
    }
    if ((month == "july" || month == "august") && day > 14)
    {
        price =  76 * day;
        finalprice = price ;
    }
    if ((month == "july" || month == "august") && (day < 14 && day > 7))
    {
        price = 76 * day;
        finalprice = price ;
    }
    return finalprice;
}

float priceAppartment(string month, int day)
{
    float finalprice;
    float price;
    if ((month == "may" || month == "october") && day > 14)
    {
        price = 65  * day;
        finalprice = price - (0.10 * price);
    }
    if ((month == "june" || month == "september") && day > 14)
    {
        price = 68.70 * day;
        finalprice = price - (0.10 * price);
    }
    if ((month == "july" || month == "august") && day > 14)
    {
        price = 77 * day;
        finalprice = price - (0.10 * price);
    }
    return finalprice;
}