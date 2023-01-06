#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int myFunction(int number);

main(){
    int number;
    cout << "Enter the number: ";
    cin >> number;
int  result = myFunction(number);
cout << "Your result is " << result;
}

int myFunction(int number){
    int total =  number * 5;
    return total;
}
