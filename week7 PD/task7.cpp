#include <iostream>
using namespace std;

main()
{
    int number1;
    int number2;
    cout << "Enter the integer: ";
    cin >> number1;
    float count2 = 0;
    float count3 = 0;
    float count4 = 0;
    for (int x = 1; x <= number1; x++)
    {
        cout << "Enter the number" << x << ": ";
        cin >> number2;
        if (number2 % 2 == 0)
        {
            count2 += 1;
        }
        if (number2 % 3 == 0)
        {
            count3 += 1;
        }
        if (number2 % 4 == 0)
        {
            count4 += 1;
        }
    }
    float p2 = (count2 * 100) / number1;
    float p3 = (count3 * 100) / number1;
    float p4 = (count4 * 100) / number1;
    cout << "Percentage of divisible of 2 are :" << p2 << " %" << endl;
    cout << "Percentage of divisible of 3 are :" << p3 << " %" << endl;
    cout << "Percentage of divisible of 4 are :" << p4 << " %" << endl;
}