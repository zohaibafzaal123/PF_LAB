#include <iostream>
using namespace std;

void printTable(int number);

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    printTable(number);

}
void printTable(int number)
{
    int x = number;
    for(int y = 1; y <= 10 ; y+=1)
    {
        cout << x << " * " << y << " = " << x * y << endl;
    }
}

