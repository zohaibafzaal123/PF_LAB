#include <iostream>
using namespace std;



main()
{
    char classes;
    char going;
    cout << "Do you have a class today (y or n): ";
    cin >> classes;
    cout << "Are your friends going (y or n): ";
    cin >> going;

    if(classes == 'y' )
    {
        if (going == 'y')
        {
        cout << "You are going.";
        }
    }
}