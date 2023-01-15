#include<iostream>
using namespace std;
float discount(string day, string month, int total);
main()
{
    string day;
    string month;
    int total;
    float res;
    cout << "enter the days:";
    cin >> day;
    cout << "enter the month name:";
    cin >> month;
    cout << "enter the total amount:";
    cin >> total;
    discount(day, month, total);
    res=discount(day, month, total);
    cout << res;
}
float discount(string day, string month, int total)
{
    float res;
    if(day=="sunday")
    {
        if(month=="october" || month=="march" || month=="august")
        {
            total=total-(total*10.0)/100.0;
        }
    }
    if(day=="monday")
    {
        if(month=="november" || month=="december")
        {
            total=total-(total*5.0)/100.0;
        }
    }
    return res;
}