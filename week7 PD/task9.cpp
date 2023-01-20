#include <iostream>
using namespace std;

void trianglePattern1(int number);

main()
{
    int number;
    cout << "Enter number of levels of patterns: ";
    cin >> number;
    trianglePattern1(number);
}

void trianglePattern1(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (float k = number - i; k > 0; k=k-0.5)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}
