#include <iostream>
using namespace std;

float totalIncome(string screening, int noColumns, int noRows);

main()
{
    string screening;
    int noColumns;
    int noRows;
    float income;
    cout << "Enter type of screening: ";
    cin >> screening;
    cout << "Enter number of columns: ";
    cin >> noColumns;
    cout << "Enter number of rows: ";
    cin >> noRows;
    income = totalIncome(screening, noColumns, noRows);
    cout << "Your total income is: " << income ;
}


float totalIncome(string screening, int noColumns, int noRows)
{
    int totalseats;
    totalseats = noColumns * noRows;
    float totalamount;
    if (screening == "premiere")
    {
        totalamount = 12 * totalseats;
    }
    if (screening == "normal")
    {
        totalamount = 7.50 * totalseats;
    }
    if (screening == "discoumt")
    {
        totalamount = 5 * totalseats;
    }
    return totalamount;
}