#include <iostream>
using namespace std;
void asterisk(int rows);
main()
{
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    asterisk(rows);
}
void asterisk(int rows)
{
    for (int i = rows; i >= 1; --i)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}