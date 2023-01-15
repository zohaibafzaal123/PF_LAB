#include <iostream>
using namespace std;

int totalMarks(string name, int subject1, int subject2, int subject3, int subject4, int subject5);
float percentages(string name, int subject1, int subject2, int subject3, int subject4, int subject5);
string grades(string name, int subject1, int subject2, int subject3, int subject4, int subject5, float percent);

main()
{
    int subject1;
    int subject2;
    int subject3;
    int subject4;
    int subject5;
    string name;
    cout << "Enter the name of student: ";
    cin >> name;
    cout << "Enter the marks of English: ";
    cin >> subject1;
    cout << "Enter the marks of Maths: ";
    cin >> subject2;
    cout << "Enter the marks of Chemistry: ";
    cin >> subject3;
    cout << "Enter the marks of Social science: ";
    cin >> subject4;
    cout << "Enter the marks of Biology: ";
    cin >> subject5;
    int total1 = totalMarks(name, subject1, subject2, subject3, subject4, subject5);
    cout << total1 << " are total marks." << endl;
    cout << name << endl;
    float percent = percentages(name, subject1, subject2, subject3, subject4, subject5);
    cout << percent << " is percentage." << endl;
    string grade = grades(name, subject1, subject2, subject3, subject4, subject5, percent);
    cout << grade << " is your grade.";
}

int totalMarks(string name, int subject1, int subject2, int subject3, int subject4, int subject5)
{
    int total = (subject1 + subject2 + subject3 + subject4 + subject5);
    return total;
}

float percentages(string name, int subject1, int subject2, int subject3, int subject4, int subject5)
{
    float percentage = ((subject1 + subject2 + subject3 + subject4 + subject5) / 500.0) * 100;
    return percentage;
}
string grades(string name, int subject1, int subject2, int subject3, int subject4, int subject5, float percent)
{
    string grade;
    if (percent > 90 || percent == 100)
        grade = "A+";
    else if (percent > 80 || percent == 90)
        grade = "A";
    else if (percent > 70 || percent == 80)
        grade = "B+";
    else if (percent > 60 || percent == 70)
        grade = "B";
    else if (percent > 50 || percent == 60)
        grade = "C";
    else if (percent > 40 || percent == 50)
        grade = "D";
    else if (percent < 40)
        grade = "F";
    return grade;
}