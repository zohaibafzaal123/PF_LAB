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
         int bill = (amount - 0.1 * amount) ;
         cout << "Total bill is: " << bill << endl;
        
       }
  if (day != "sunday")
       {
         cout << "Total bill is: " << amount;
       }


}
