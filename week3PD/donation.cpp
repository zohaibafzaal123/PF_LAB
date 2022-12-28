#include<iostream>
using namespace std;
main()
{
string name;
int priceOfAdultTicket;
int priceOfChildTicket;
int numberOfAdultSoldTicket;
int numberOfChildSoldTicket;
float percentage;
int adultticket;
int childticket;
int totalAmount;
int amountDonate;
cout << "Enter Movie Name: " ;
cin >> name;
cout << "Enter Adult Ticket Price: " ;
cin >> priceOfAdultTicket ;
cout << "Enter Child Ticket Price: " ;
cin >> priceOfChildTicket ;
cout << "Enter Number of Adult Ticket Sold: " ;
cin >> numberOfAdultSoldTicket ;
cout << "Enter Number Of Child Ticket Sold: " ;
cin >> numberOfChildSoldTicket ;
cout << "Enter Percentage to Donate: ";
cin >> percentage;
adultticket = numberOfAdultSoldTicket * priceOfAdultTicket;
childticket = numberOfChildSoldTicket * priceOfChildTicket;
totalAmount = adultticket + childticket ;
cout << "_____________________________________________________" << endl;
cout << "total Amount Generated: " << totalAmount << endl;
amountDonate = (percentage / 100) * totalAmount;
cout << "Amount after donation: " << amountDonate ;
}