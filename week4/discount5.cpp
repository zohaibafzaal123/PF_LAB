#include <iostream>
using namespace std;

void calculateBill(string day, int amount);

main()
{

int amount;
string day;
cout << "Enter the day: ";
cin >> day;
cout << "Enter the amount: ";
cin >> amount;
calculateBill(day,amount);
}


void calculateBill(string day,int amount)
{
  if (day == "sunday")
       { 
         float bill = amount - 0.1 * amount ;
         cout << "Total bill is: " << bill << endl;
        
       }
  if (day != "sunday")
       { float bill2 = amount - 0.05 * amount ;
         cout << "Total bill is: " << bill2 << amount;
       }


}