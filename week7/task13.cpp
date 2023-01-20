#include <iostream>
using namespace std;

void percentages(int number, float percentage1, float percentage2, float percentage3, float percentage4, float percentage5, int count1, int count2, int count3, int count4, int count5);

main()
{
    int number;
    float percentage1 = 0;
    float percentage2 = 0;
    float percentage3 = 0;
    float percentage4 = 0;
    float percentage5 = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;

    cout << "Enter an integer: ";
    cin >> number;
    percentages(number, percentage1, percentage2, percentage3, percentage4, percentage5, count1, count2, count3, count4, count5);
}

void percentages(int number, float percentage1, float percentage2, float percentage3, float percentage4, float percentage5, int count1, int count2, int count3, int count4, int count5)
{
    for (int i = 1; i <= number; i += 1)
    {
        int currentNumber;
        cout << "Enter the numbers within the range (1 to 1000): ";
        cin >> currentNumber;
        if (currentNumber < 200)
        {
            count1++;
            percentage1 = count1 /200 * 100 ;
            cout << "Percentage is: " << percentage1 << endl;
        }
        else if (currentNumber >= 200 && currentNumber <= 399)
        {
            count2++;
            percentage2 = count2 /400 * 100 ;
            cout << "Percentage is: " << percentage2 << endl;
        }
        else if (currentNumber >= 400 && currentNumber <= 599)
        {
            count3++;
            percentage3 = count3 /600 * 100;
            cout << "Percentage is: " << percentage3 << endl;
        }
        else if (currentNumber >= 600 && currentNumber <= 799)
        {
            count4++;
            percentage4 = count4 /800 * 100;
            cout << "Percentage is: " << percentage4 << endl;
        }
        else
            count5++;
        percentage5 = count5 /1000 * 100 ;
        cout << "Percentage is: " << percentage5 << endl;
    }
}
