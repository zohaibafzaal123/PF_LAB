#include<iostream>
using namespace std;
char res(int number);
main()
{
    int number;
    char grade;
    cout << "enter the number";
    cin >> number;
    grade = res(number);
    cout << grade;
}
char res(int number)
{
    char grade;
    if(number<50)
    {
        grade='f';
    }
    else if(number>51 && number<60)
    {
        grade='e';
    }
    else if(number>61 && number<70)
    {
        grade='d';
    }
    else if(number>71 && number<80)
    {
        grade='c';
    }
    else if(number>81 && number<85)
    {
        grade='b';
    }
    else{
        grade='a';
    }
    return grade;
}