#include <iostream>
using namespace std;
void asterisk(int rows);

main()
{

    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    asterisk(rows);
}
void asterisk(int rows)
{

    for (int i = rows; i >= 1; --i)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = rows; k >= i; --k)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = rows; i >= 1; --i)
    {
        for (int j = rows; j>= i; --j)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}