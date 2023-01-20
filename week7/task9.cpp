#include <iostream>
using namespace std;
int validInteger(int number);

main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int result = validInteger(number);
}

int validInteger(int number)
{
    while (number <= 0)
    {
        cout << "Error ! Insert a number greater than zero: " << endl;
        cout << "Enter the number again: ";
        cin >> number;
    }
    cout << "Program ends !! ";
}