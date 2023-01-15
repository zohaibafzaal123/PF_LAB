#include <iostream>
using namespace std;



main()
{
    int cost;
    string brand;
    cout << "Enter the cost of dress: ";
    cin >> cost;
    cout << "Enter the brand of dress in capital: ";
    cin >> brand;

    if(cost < 1500 && brand == "MTJ")
    {
        cout << "Buy the dress";
    }
}