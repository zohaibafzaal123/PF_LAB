#include <iostream>
using namespace std;

char checkResult(int marks);

main()
{
    int marks;
    char yourGrade;
    cout << "Enter marks: ";
    cin >> marks;
    yourGrade = checkResult(marks);
    cout << "Your grade is: " << yourGrade;
}
char checkResult(int marks)
{
    char grade;
    if (marks < 50)
    {
        grade = 'F';
    }
    else if (marks >= 50 && marks <= 60)
    {
        grade = 'E';
    }
    else if (marks >= 61 && marks <= 70)
    {
        grade = 'D';
    }
    else if (marks >= 71 && marks <= 80)
    {
        grade = 'C';
    }
    else if (marks >= 81 && marks <= 85)
    {
        grade = 'B';
    }
    else if (marks > 85)
    {
        grade = 'A';
    }
    else
    {
        grade = '0';
    }
    return grade;
}