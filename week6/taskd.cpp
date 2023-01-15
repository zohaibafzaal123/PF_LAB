#include <iostream>
using namespace std;



main()
{
    int cost;
    string brand;
    cout << "Enter the cost of dress: ";
    cin >> cost;
    cout << "Enter the name of brand in capital letters: ";
    cin >> brand;

    if(cost < 1500 )
    {
        if (brand == "MTJ")
        {
        cout << "Buy the dress";
        }
    }
}