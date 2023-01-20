#include <iostream>
using namespace std;

void calculatePrice(float heritageMoney, int years, int age);

main()
{
    float heritageMoney;
    int years;
    int age = 18;
    cout << "Enter the money (inherited money): ";
    cin >> heritageMoney;
    cout << "Enter the year in which Ivan has to live in past(range 1801 to 1900): ";
    cin >> years;
    calculatePrice(heritageMoney, years, age);
}
void calculatePrice(float heritageMoney, int years, int age)
{
    for (int currentYear = 1800; currentYear <= years; currentYear++)
    {
        if (currentYear % 2 == 0)
        {
            heritageMoney = heritageMoney - 12000;
        }
        else
        {
            heritageMoney = heritageMoney - (12000 + 50 * age);
        }
        age++;
    }
    if (heritageMoney > 0)
    {
        cout << "Yes! He will live a carefree life and will have " << heritageMoney << " dollars left." << endl;
    }
    if (heritageMoney <= 0)
    {
        cout << "Oops! " << heritageMoney << " is not enough." << endl;
    }
}