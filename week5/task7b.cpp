#include <iostream>
#include <cmath>
using namespace std;


main(){
int volume;
int pressure1;
int pressure2;
float hours;
cout << "Enter the volume of the tank: ";
cin >> volume;
cout << "Enter the pressure of the pipe1: ";
cin >> pressure1;
cout << "Enter the pressure of the pipe2: ";
cin >> pressure2;
cout << "Enter the hours of the workers absent: ";
cin >> hours;

float totalPipe1 = pressure1 * hours;
float totalPipe2 = pressure2 * hours;
float totalVolume = totalPipe1 + totalPipe2;
cout << totalPipe1 << endl;
float pipe1Percentage = (totalPipe1 * 100) / volume;
float pipe2Percentage = (totalPipe2 * 100) / volume;
float totalPercentage = (totalVolume * 100) / volume;
if(totalVolume < volume){
    cout << "The pool is  " << totalPercentage << "%" << "full. "; 
    cout << "Pipe 1:" << pipe1Percentage << " Pipe 2 :" << pipe2Percentage;
}
if(totalVolume > volume){
    int overflow = totalVolume - volume;
cout << "For " << hours << " hours the pool overflown with " << overflow << " liters";
}


}