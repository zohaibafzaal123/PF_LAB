#include <iostream>
using namespace std;

void count(int number);

main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    count (number);
}

void count(int number)
{
    for (int count = 1; count <= number; count++)
    {
        cout << "\t" << count << endl;
    }
}