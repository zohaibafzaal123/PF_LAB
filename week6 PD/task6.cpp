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
    float price;
    if ((month == "may" || month == "october") && day > 14)
    {
        price = (0.70 * 50) * day;
    }
    if ((month == "may" || month == "october") && (day < 14 && day > 7))
    {
        price = (0.95 * 50) * day;
    }
    if ((month == "june" || month == "september") && day > 14)
    {
        price = (0.70 * 75.20) * day;
    }
    if ((month == "june" || month == "september") && (day < 14 && day > 7))
    {
        price = (0.95 * 75.20) * day;
    }
    if ((month == "july" || month == "august") && day > 14)
    {
        price = (0.70 * 76) * day;
    }
    if ((month == "july" || month == "august") && (day < 14 && day > 7))
    {
        price = (0.95 * 76) * day;
    }
    return price;
}

float priceAppartment(string month, int day)
{
    float price;
    if ((month == "may" || month == "october") && day > 14)
    {
        price = (65 * 0.90) * day;
    }
    if ((month == "june" || month == "september") && day > 14)
    {
        price = (0.90 * 68.70) * day;
    }
    if ((month == "july" || month == "august") && day > 14)
    {
        price = (0.90 * 77) * day;
    }
    return price;
}