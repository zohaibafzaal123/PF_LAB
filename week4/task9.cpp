#include <iostream>
using namespace std;

void isEligible(int age);

main()
{
int age;
cout << "Enter your age: " ;
cin >> age;
isEligible(age);



}
void isEligible(int age){
if (age >= 18){
cout << "You are eligible...." << endl ;}
if (age < 18){
cout << "You are not eligible...." << endl ;}
}