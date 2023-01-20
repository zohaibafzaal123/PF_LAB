#include <iostream>
using namespace std;
int digitSum (int number);

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = digitSum(number);
    cout << "Sum is: " << result;

}
int digitSum(int number)
{
    int number2 = 0;
    int sum = 0;
    while (number != 0)
    {
        number2 = number % 10;
        number = number / 10;
        sum = sum + number2;
    }
    return sum;
}
