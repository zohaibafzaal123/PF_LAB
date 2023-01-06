#include <iostream>
using namespace std;

void hoursCalculator(int hours, int minutes);

main(){
    int hours;
    int minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    hoursCalculator(hours, minutes);
}

void hoursCalculator(int hours, int minutes){
    minutes = minutes + 15;
    if(minutes > 60){
        minutes = minutes - 60;
        hours = hours + 1;
    }
    if(hours > 23){
        hours = hours - 24;
    }
cout << "The output time is " << hours << " : " << minutes;
}

