#include <iostream>
using namespace std;

float discount (float amount);

main()
{
    float amount;
    float payable;
    cout << "Enter the purchase amount: ";
    cin >> amount;
    payable = discount(amount);
    cout << "Payable amount after discount is: " << payable ;
}
float discount (float amount)
{
    float payable = amount - (amount * 0.10);
    return payable;
}