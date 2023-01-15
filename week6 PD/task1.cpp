#include <iostream>
using namespace std;

void decision(string temperature, string humidity);

main()
{
    string temperature;
    string humidity;
    cout << "Enter the temperature: ";
    cin >> temperature;
    cout << "Enter the humidity: ";
    cin >> humidity;
    decision(temperature, humidity);
}

void decision(string temperature, string humidity)
{
    if (temperature == "warm" && humidity == "dry")
        cout << "play tennis";
    else if (temperature == "warm" && humidity == "humid")
        cout << "Lets swim";
    else if (temperature == "cold" && humidity == "dry")
        cout << "play basketball";
    else if (temperature == "cold" && humidity == "humid")
        cout << "Lets watch TV";
}