#include<iostream>
using namespace std;
main()
{
float weight;
int daysrequire;
int daysForOneKilogram = 15;
cout << "Enter Weight that you want to loose: ";
cin >> weight;
daysrequire = daysForOneKilogram * weight;
cout << "It will take you " << daysrequire << " Days to loose" << weight << " KGs" ;
}