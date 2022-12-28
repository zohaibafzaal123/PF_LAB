#include <iostream>
using namespace std;
main()
{
string name;
float matric;
float intermediate;
float ecat;
float aggregate;
cout << "enter name: ";
cin >> name ;
cout << "enter marks of matric out of 1100: ";
cin >> matric ;
matric = (matric/1100)*10;
cout << "enter marks of intermediate out of 550: ";
cin >> intermediate;
intermediate = (intermediate/550)*40;
cout << "enter ecat marks: ";
cin >> ecat;
ecat = (ecat/400)*50;
aggregate = ecat+matric+intermediate;
cout << "Your aggregate is: " << aggregate;
}

