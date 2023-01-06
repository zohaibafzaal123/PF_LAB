#include <iostream>
#include <cmath>
using namespace std;

main()
{

int a = 5;
int b = 6;
int c = 1;

float equation1 = (-b + sqrt(pow(b, 2) - 4*a*c)) / 2 * a ;
float equation2 = (-b - sqrt(pow(b, 2) - 4*a*c)) / 2 * a ;
cout << equation1 << " is answer" << endl ;
cout << equation2 << " is answer" << endl ;
}
