#include <iostream>
using namespace std;

void check(int number); 

mian()
{
int number;
while (true){
cout << "Enter your number: ";
cin >> number ;
check (number);
}
}

void check(int number){
if (number % 2 != 0){
cout << "Given number is odd." << endl ;
}

if (number % 2 == 0){
cout << "Given number is even." << endl ;
}
}