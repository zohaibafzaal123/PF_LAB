#include <iostream>
using namespace std;

void dots (int number);

main()
{
     int number;
     cout << "Enter the number: ";
     cin >> number;
     dots (number);
}

void dots (int number)
{
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    cout << sum;
}