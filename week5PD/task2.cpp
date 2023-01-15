#include <iostream>
using namespace std;

main()
{

    float length;
    float width;
    float height;
    string outputUnit;
    float pyramidVolume;
    float volume;

    cout << "Enter length in meters: ";
    cin >> length;
    cout << "Enter width in  meters: ";
    cin >> width;
    cout << "Enter height in meters: ";
    cin >> height;
    cout << "Enter output unit i.e m,cm,mm,km : ";
    cin >> outputUnit;
    pyramidVolume = (length * width * height) / 3;

    if (outputUnit == "mm")
    {
        volume = pyramidVolume * 1000 * 1000 * 1000;
        cout << volume << " cubic millimeters" << endl;
    }

    if (outputUnit == "km")
    {
        volume = pyramidVolume * 0.0001 * 0.0001 * 0.0001;
        cout << volume << " cubic kilometers" << endl;
    }
    if (outputUnit == "cm")
    {
        volume = pyramidVolume * 100 * 100 * 100;
        cout << volume << " cubic centimeters" << endl;
    }
    if (outputUnit == "m")
    {
        cout << volume << " cubicmeters" << endl;
    }
}