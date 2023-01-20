#include <iostream>
using namespace std;

int showSum();

main()
{
    int result;
    result = showSum();
    cout << result << endl;
       
}
int showSum()
{
    int sum = 0;
    for(int x = 1; x <= 5; x++)
    {
        sum = sum + x;
    }
    return sum;
}