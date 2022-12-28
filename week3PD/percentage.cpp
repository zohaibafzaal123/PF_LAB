#include<iostream>
using namespace std;
main()
{
float marks1;
float marks2;
float marks3;
float marks4;
float marks5;
float percentage;
float obtainMarks;
string name;
cout << "Enter Your name: ";
cin >> name;
cout << "Enter subject 01 marks: ";
cin >> marks1;
cout << "Enter subject 02 marks: ";
cin >> marks2;
cout << "Enter subject 03 marks: ";
cin >> marks3;
cout << "Enter subject 04 marks: ";
cin >> marks4;
cout << "Enter subject 05 marks: ";
cin >> marks5;
obtainMarks =  (marks1+marks2+marks3+marks4+marks5);
percentage = (obtainMarks/500) *(100);
cout << "Your percentage: " << percentage;
}