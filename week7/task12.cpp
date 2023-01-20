#include<iostream>
using namespace std;

int calculatehcf(int number1, int number2);
int calculatelcm(int number1, int number2);

main()
{
    int number1;
    int number2;
    cout << "Enter an integer: ";
    cin >> number1;
    cout << "Enter a second integer: ";
    cin >> number2;
    int result = calculatehcf(number1, number2);
    cout << "HCF of given numbers is: " << result << endl;
    int result1 = calculatelcm (number1, number2);
    cout << "LCM is: " << result1;
}

int calculatelcm(int number1, int number2)
{
    int lcm;
    lcm = (number1 * number2) / calculatehcf (number1, number2);
    return lcm;
}

int calculatehcf(int number1, int number2)
{
    int count = 0;
    for (int i = 1; i <= number1 && i <= number2 ; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            count = i;
        }
    }
    return count;
}