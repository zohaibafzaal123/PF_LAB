#include <iostream>
using namespace std;

void displayDetails(string name,int marks);

main()
{
 string name;
 int marks;
 cout << "Enter your name: ";
 cin >> name;
 cout << "Enter your marks: ";
 cin >> marks;
 displayDetails(name,marks); 
}

void displayDetails(string name,int marks)

{
 cout << " Your name is: " << name << endl ;
 cout << " Your marks are: " << marks ;
}