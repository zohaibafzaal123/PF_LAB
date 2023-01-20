#include <iostream>
using namespace std;

int frequencyChecker(int number, int digit);
main()
{
    int number;
    int digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit: ";
    cin >> digit;

    int result = frequencyChecker(number, digit);
    cout << "FREQUENCY of " << digit << " in a given number is: " << result << endl;
}

int frequencyChecker(int number, int digit)
{
   int counter = 0;
   while (number != 0)
   {
    int lastDigit = number % 10;
    if (lastDigit == digit)
    {
        counter += 1;
    }
    number = number / 10;
   }
   return counter;
}