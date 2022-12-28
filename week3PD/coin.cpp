#include<iostream>
using namespace std;
main()
{
float vegetablePrice ;
float fruitPrice ;
int totalKGsOfVegetablesSold ;
int totalKGsOfFruitsSold ;
float totalVegetableIncome ;
float totalFruitIncome ;
float totalIncome ;
float totalincomeinrps ;
cout << "Selling Price of Vegetable per KG: ";
cin >> vegetablePrice ;
cout << "Selling Price of Fruit per KG: ";
cin >> fruitPrice ;
cout << "Total Kilograms of Vegetables sold: ";
cin >> totalKGsOfVegetablesSold;
cout << "Total Kilograms of Fruits sold: ";
cin >> totalKGsOfFruitsSold;
totalVegetableIncome = vegetablePrice * totalKGsOfVegetablesSold ;
totalFruitIncome = fruitPrice * totalKGsOfFruitsSold ;
totalIncome = totalVegetableIncome + totalFruitIncome ;
totalincomeinrps = totalIncome / 1.94 ;
cout << "Earning of all Fruits and Vegetables in rps is: " << totalincomeinrps ;
}