#include<iostream>
using namespace std;
main()
{
float bagSize;
float bagCost;
float areaOfBag;
float costPerPound;
float costPerSquarefeet;
cout << "Enter Bag Size in Pounds: ";
cin >> bagSize;
cout << "Enter cost of the bag: ";
cin >> bagCost;
cout << "Enter area covered by each bag in square feet: ";
cin >> areaOfBag;
cout <<"__________________________________________________________________" << endl;
costPerPound = bagCost/bagSize;
costPerSquarefeet = bagCost/areaOfBag;
cout << "Cost of the fertilizer per pound: " << costPerPound << endl ;
cout << "Cost of fertilizing the area per square feet: " << costPerSquarefeet;
}
