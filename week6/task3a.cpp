#include <iostream>
using namespace std;

string checkSpeed(float speed);

main()
{
    float speed;
    string answer;
    cout << "Enter the speed: ";
    cin >> speed;
    answer = checkSpeed(speed);
    cout << "You are " << answer;
}

string checkSpeed(float speed)
{
    string title;
    if (speed == 10)
    {
        title = "Slow";
    }
    if (speed > 10 && speed == 50)
    {
        title = "Average";
    }
    if (speed > 50 && speed == 150)
    {
        title = "Fast";
    }
    if (speed > 150 && speed == 1000)
    {
        title = "Ultra-fast";
    }
    if (speed > 1000)
    {
        title = "Extremely fast";
    }
    return title;
}