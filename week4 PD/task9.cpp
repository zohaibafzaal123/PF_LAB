#include <iostream> 
using namespace std;

void reverse(string boolean);
main()
{
string boolean;
cout << "Enter true or fasle: ";
cin >> boolean;
reverse(boolean);
}

void reverse(string boolean)
{
 if (boolean == "true")
     { 
      cout << "FALSE" ;
     }
 if (boolean == "FALSE")
     {
      cout << "TRUE" ;
      }
}