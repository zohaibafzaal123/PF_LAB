#include <iostream>
using namespace std;

main()
{
    int days;
    int number;
    int treatedPatients = 0;
    int untreatedPatients = 0;
    int doctors = 7;
    cout << "Enter the number of days (range 1 to 1000): ";
    cin >> days;

    for (int x = 1; x <= days; x++)
    {
        cout << "Enter the total patients of day (Range 0 to 10000) " << x << " : ";
        cin >> number;
        if (x % 3 == 0 && treatedPatients < untreatedPatients)
        {
            doctors = doctors + 1;
        }
        if (number > doctors)
        {
            untreatedPatients = untreatedPatients + (number - doctors);
            treatedPatients = treatedPatients + doctors;
        }
        if (number <= doctors)
        {
            untreatedPatients = untreatedPatients + 0;
            treatedPatients = treatedPatients + number;
        }
    }

    cout << "Treated patients are: " << treatedPatients << endl;
    cout << "Untreated patients are: " << untreatedPatients << endl;
}