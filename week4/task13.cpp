#include <iostream>
using namespace std;
void printName(string name);
main()
{
string username;
while (true){
cout << "Enter your name: ";
cin >> username;
printName(username);}
}

void printName(string name){
cout << "Your name is: " << name << endl ; 

}