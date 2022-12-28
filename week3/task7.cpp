#include <iostream>
using namespace std;
main()
{
int megabytes,result;
cout << "enter megabytes: ";
cin >> megabytes;
result = megabytes*1024*1024*8;
cout << "result is: " << result;
}