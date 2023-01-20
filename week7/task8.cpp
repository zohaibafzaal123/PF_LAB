#include <iostream>
using namespace std;
void enterChoice(char yourChoice);

main()
{
    char yourChoice = 'y';

    enterChoice(yourChoice);
}

void enterChoice(char yourChoice)
{
    while (yourChoice == 'y')
    {
        cout << "I am happy !" << endl;
        cout << "Enter your choice: ";
        cin >> yourChoice;
    }
    cout << "Program ends !! ";
}