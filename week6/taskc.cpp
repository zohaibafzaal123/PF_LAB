#include <iostream>
using namespace std;



main()
{
    int rollno;
    string name;
    cout << "Enter the roll-no: ";
    cin >> rollno;
    cout << "Enter the name in capital letters: ";
    cin >> name;


    if(rollno == 501 && name == "ALI")
    {
        cout << "Congratulations";
    }
}