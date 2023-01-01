#include <iostream>
using namespace std;

void displayDetails(string name,int marks,float aggregate,char section);

main()
{
 string name;
 int marks;
 float aggregate;
 char section;
 cout << "Enter your name: ";
 cin >> name;
 cout << "Enter your marks: ";
 cin >> marks; 
 cout << "Enter your aggregate: ";
 cin >> aggregate;
 cout << "Enter your section: ";
 cin >> section;
 displayDetails(name,marks,aggregate,section);
}

void displayDetails(string name,int marks,float aggregate,char section)

{
 cout << " Your name is: " << name << endl ;
 cout << " Your marks are: " << marks ;
 cout << " Your aggregate is : " << aggregate;
 cout << " Your section  is: " << section;
}