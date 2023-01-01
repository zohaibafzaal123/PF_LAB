#include <iostream>
using namespace std;

void pass(int marks);
void fail(int marks);

main()
{
int marks;
cout << "Enter your marks: ";
cin >> marks;


void pass(int marks)
{
if (marks >= 50 )
{
 cout << "You are pass..." << endl;
}
}
void fail(int marks)
{
if (marks <= 50 )
{
 cout << "You are fail..." << endl;
}
}
}
