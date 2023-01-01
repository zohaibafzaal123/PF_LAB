#include <iostream> 
using namespace std;

void discount (string name, float price);

main()
{
string name;
float price;
  while(true)
  {
  cout << "Enter name of the country: ";
  cin >> name;
  cout << "Enter price: ";
  cin >> price;
  discount(name,price);
  }
}


void discount (string name, float price)
{
int discount;
if(name == "Pakistan")
  {
   discount = price - 0.05 * price;
  }
if(name == "Ireland")
  {
   discount = price - 0.10 * price;
  }
if(name == "India")
  {
   discount = price - 0.20 * price;
  }
if(name == "England")
  {
   discount = price - 0.30 * price;
  }
if(name == "Canada")
  {
   discount = price - 0.45 * price;
  }
cout << "Your bill is: " << discount << "dollars" << endl;
}