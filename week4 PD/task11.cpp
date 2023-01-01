#include <iostream> 
using namespace std;

void speedLim(int speed);

main()
{
int speed;
cout << "Enter speed of car: " ;
cin >> speed;
speedLim(speed);
}

void speedLim(int speed)
{
if (speed == 100)
   {
   cout << "Perfect! You’re going good.";
   }
if (speed > 100)
   {
   cout << "Halt….YOU WILL BE CHALLENGED!!!" ;
   }
}