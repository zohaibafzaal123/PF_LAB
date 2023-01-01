#include <iostream>
using namespace std;
void isNormal(float temperature);

main()

{
float temperature;
 while (true) 
  {
   cout << "Enter temperature of Patient: ";
   cin >> temperature;
   isNormal(temperature);
  }
   
     
}
 
void isNormal(float temperature)
{
if (temperature == 98)
       {
         cout << "Normal" << endl;
       }
}
