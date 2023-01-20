#include <iostream>
using namespace std;

int totalDigits(int number);

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = totalDigits(number);
    cout << "Total digits are: " << result;
}

int totalDigits(int number)
{
    int counter = 0;
    while(number != 0)
    {
        
        number = number / 10;
        counter = counter + 1;
    }
    return counter;
}