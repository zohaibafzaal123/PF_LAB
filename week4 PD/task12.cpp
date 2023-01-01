#include <iostream> 
using namespace std;

void speedLim(int speed);

main()
{
int redROSE;
int whiteROSE;
int tullips;

float redRosePrice;
float whiteRosePrice;
float tullipsPrice;
float totalPrice;
float discountedPrice;

cout << "Enter the number of red roses: ";
cin >> redROSE;
cout << "Enter the number of white roses: ";
cin >> whiteROSE;
cout << "Enter the number of tullips flower: ";
cin >> tullips;

redRosePrice = 2 * redROSE;
whiteRosePrice = 4.10 * whiteROSE;
tullipsPrice = 2.50 * tullips;
totalPrice = redRosePrice + whiteRosePrice + tullipsPrice;

if(totalPrice > 200)
{
discountedPrice = totalPrice - 0.2 * totalPrice;
cout << "Original price is: " << totalPrice << endl;
cout << "Discounted price is: " << discountedPrice << endl;
}


if(totalPrice <= 200)
{
cout << "Original price is: " << totalPrice << endl;
}

}