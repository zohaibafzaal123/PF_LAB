#include <iostream> 
using namespace std;

main()

{
int days;
int holidays;
int sleepTime;
int remaintime;
int hours;
int minutes;
 
cout << "Enter number of working days: ";
cin >> days;
cout << "Enter number of holidays: ";
cin >> holidays;
days = 365 - holidays;
sleepTime = days * 63 + holidays * 127 ;
remaintime = 30000 - sleepTime;
hours = remaintime / 60 ;
minutes = remaintime % 60 ;

   if (sleepTime < 30000)
   {
    remaintime = sleepTime -30000;
   }

    if (sleepTime > 30000)
   {
    remaintime = 30000 - sleepTime;
   }

   if (sleepTime >= 30000)
   { 
   cout << "Tom will run away" << endl;
   cout << hours << "hours and " << minutes << "minutes less for play" << endl;
   }

   if (sleepTime < 30000)
   { 
    cout << "Tom sleeps well" << endl;
    cout << hours << "hours and " << minutes << "minutes less for play" << endl;
   }  

}


