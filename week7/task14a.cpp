#include <iostream>
using namespace std;
void calculateMoney(int age, float price, int quantity);

main()
{
    int age;
    float price;
    int quantity;
    cout << "Enter the age (range 1 to 77): ";
    cin >> age;
    cout << "Enter the price of washing machine (1.0 to 10000.0): ";
    cin >> price;
    cout << "Enter the quantity of toys (range 0 to 40): ";
    cin >> quantity;
    calculateMoney(age, price, quantity);
}
void calculateMoney(int age, float price, int quantity)
{
    int numberOfToys = 0;
    float savedMoney = 0;
    float moneyForBd = 10;
    for (int currentYear = 1; currentYear <= age; currentYear++)
    {
        if (currentYear % 2 == 0)
        {
            savedMoney += (moneyForBd - 1);
            moneyForBd += 10;
        }
        else
        {
            numberOfToys++;
        }
    }
    savedMoney = savedMoney + numberOfToys * quantity;
    if (savedMoney >= price)
    {
        float result = savedMoney - price;
        cout << "Yes! you have enough money. Rs: " << result << endl;
    }
    if (savedMoney < price)
    {
        float result = price - savedMoney;
        cout << "No! you have not enough money. Rs: " << result << endl;
    }
}