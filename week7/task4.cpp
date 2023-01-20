#include <iostream>
using namespace std;

void fibonacci(int number);

main()
{
    int number;
    cout << "Enter the lenght of series: ";
    cin >> number;
    fibonacci (number);
}

void fibonacci(int number)
{
    int number1 = 0;
    int number2 = 1;
    int result;
    cout << "Fabonacci series: " << number1 << ", " << number2 ;

    for (int x = 1; x <= number-2; x = x+1)
    {
        result = number1 + number2;
        cout << ", " << result ;
        number1 = number2;
        number2 = result;
        
    }
}