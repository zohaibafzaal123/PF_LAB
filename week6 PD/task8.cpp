#include <iostream>
using namespace std;

main()
{
    int h;
    int xCoord;
    int yCoord;
    cout << "Enter the value of h: ";
    cin >> h;
    cout << "Enter the value of coordinate of x: ";
    cin >> xCoord;
    cout << "Enter the value of coordinate of y:";
    cin >> yCoord;

    if (xCoord == h || yCoord == h)
    {
        cout << "border";
    }

    else if ((xCoord >= 0) && (xCoord > (3 * h)) || (yCoord >= 0 && (yCoord > (3 * h))))
    {

        cout << "outside";
    }

    else if ((xCoord >= 0) && (xCoord < (3 * h)))
    {
        if (yCoord > 0 && (yCoord <= (4 * h)))
        {
            cout << "inside";
        }
    }
}