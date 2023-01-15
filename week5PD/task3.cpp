#include <iostream>
using namespace std;

main()
{
   float itemPrice;
   char typeCode;
   float taxRate;
   float finalPrice;
   float taxAmount;

   cout << "Enter item price: ";
   cin >> itemPrice;
   cout << "Enter type code of item in capital: ";
   cin >> typeCode;

   if(typeCode == 'M')
   {
    string vehicle = "Motorcycle";
    taxRate = 6;
    taxAmount = itemPrice * (taxRate / 100);
    finalPrice = itemPrice + taxAmount;
    cout << "The final price on a vehicle of type " << vehicle <<" after adding the tax is " << taxRate << "$" ;
    cout << " and $ " << finalPrice << "with the final price.";
   }
   if(typeCode == 'E')
   {
    string vehicle = "Electric";
    taxRate = 8;
    taxAmount = itemPrice * (taxRate / 100);
    finalPrice = itemPrice + taxAmount;
    cout << "The final price on a vehicle of type " << vehicle <<" after adding the tax is " << taxRate << "$" ;
    cout << " and $ " << finalPrice << "with the final price.";
   }
   if(typeCode == 'S')
   {
    string vehicle = "Sedan";
    taxRate = 10;
    taxAmount = itemPrice * (taxRate / 100);
    finalPrice = itemPrice + taxAmount;
    cout << "The final price on a vehicle of type " << vehicle <<" after adding the tax is " << taxRate << "$" ;
    cout << " and $ " << finalPrice << "with the final price.";
   }
   if(typeCode == 'V')
   {
    string vehicle = "Van";
    taxRate = 12;
    taxAmount = itemPrice * (taxRate / 100);
    finalPrice = itemPrice + taxAmount;
    cout << "The final price on a vehicle of type " << vehicle <<" after adding the tax is " << taxRate << "$" ;
    cout << " and $ " << finalPrice << "with the final price.";
   }
 if(typeCode == 'T')
   {
    string vehicle = "Truck";
    taxRate = 15;
    taxAmount = itemPrice * (taxRate / 100);
    finalPrice = itemPrice + taxAmount;
    cout << "The final price on a vehicle of type " << vehicle <<" after adding the tax is " << taxRate << "$" ;
    cout << " and $ " << finalPrice << "with the final price.";
   }


}