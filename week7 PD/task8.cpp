#include <iostream>
using namespace std;

main()
{
    float number;
    float ton;
    float bus = 0;
    float train = 0;
    float truck = 0;
    cout << "Enter the number of cargo for transportation (1 to 1000): ";
    cin >> number;
    for (int x = 1; x <= number; x++)
    {
        cout << "Enter the tonage of current cargo (1 to 1000) " << x << ": ";
        cin >> ton;
        if (ton <= 3)
        {
            bus = bus + ton;
        }
        if (ton > 3 && ton <= 11)
        {
            truck = truck + ton;
        }
        if (ton > 11)
        {
            train = train + ton;
        }
    }
    float sum = bus + train + truck;
    float busPercentage = (bus * 100) / sum;
    float truckPercentage = (truck * 100) / sum;
    float trainPercentage = (train * 100) / sum;
    float average = ((bus * 200) + (truck * 175) + (train * 120)) / sum;
    cout << endl;
    cout << "Average amount is " << average << endl;
    cout << "Bus percentage is " << busPercentage << " %" << endl;
    cout << "Truck percentage is " << truckPercentage << " %" << endl;
    cout << "Train percentage is " << trainPercentage << " %" << endl;
}