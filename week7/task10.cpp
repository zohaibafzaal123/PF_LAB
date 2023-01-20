#include <iostream>
using namespace std;

int count(int natural);

main()
{
    int natural = 100;
    int result = count(natural);
    cout << "The sum from 1 to " << natural << " is: " << result ;
}

int count(int natural)
{
    int sum = 0;

    for (int count = 1; count <= natural; count++)
    {
        sum = sum + count;
    }
    return sum;
}