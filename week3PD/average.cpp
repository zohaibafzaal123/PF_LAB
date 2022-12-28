#include <iostream>
using namespace std;

main()
{

int marks1;
int marks2;
int marks3;
int totalMarks;
int average;

cout << "Enter marks of 1st student: ";
cin >> marks1;
cout << "Enter marks of 2nd student: ";
cin >> marks2;
cout << "Enter marks of 3rd student: ";
cin >> marks3;
cout << "Enter total marks for one student: ";
cin >> totalMarks;

average = (marks1 + marks2 + marks3) / 3;
cout << "Average marks of class is: " << average << " out of: " << totalMarks ;

}
