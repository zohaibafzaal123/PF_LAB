#include<iostream>
using namespace std;

float budgetchecker(float budget,string category,int people);

main()
{
    system("cls");

    float res,budget,people;
    string category;
    cout << "Enter your budget : ";
    cin >> budget;
    cout << "Enter the ticket category : ";
    cin >> category;
    cout << "Enter the number of peoples : ";
    cin >> people;
    res = budgetchecker(budget,category,people);
    if(res>0)
    {
        cout << "Yes! You have " << res << " QR left.";
    }
    else
    {
        cout << "Not enough money! You need " << abs(res) << " QR.";
    }
    
}

float budgetchecker(float budget,string category,int people)
{
    float fare,rem,tic_pr;
    if (people < 5 && category == "vip")
    {
        fare = 0.75*budget;
        tic_pr = people*499.99;
        rem=budget-(fare+tic_pr);
    }
    else if (people <5 && category == "normal")
    {
        fare =0.75*budget;
        tic_pr = people*249.99;
        rem=budget-(fare+tic_pr);
    }
    else if (people >= 5 && people <=9 && category == "vip")
    {
        fare =0.6*budget;
        tic_pr = people*499.99;
        rem=budget-(fare+tic_pr);
    }
    else if (people >= 5 && people <10 && category == "normal")
    {
        fare =0.6*budget;
        tic_pr = people*249.99;
        rem=budget-(fare+tic_pr);
    }
    else if (people >= 10 && people <25 && category == "vip")
    {
        fare =0.5*budget;
        tic_pr = people*499.99;
        rem=budget-(fare+tic_pr);
    }
    else if (people >= 10 && people <25 && category == "normal")
    {
        fare =0.5*budget;
        tic_pr = people*249.99;
        rem=budget-(fare+tic_pr);
    }
    else if (people >= 25 && people <50 && category == "vip")
    {
        fare =0.4*budget;
        tic_pr = people*499.99;
        rem=budget-(fare+tic_pr);
    }
    else if (people >= 25 && people <50 && category == "normal")
    {
        fare =0.4*budget;
        tic_pr = people*249.99;
        rem=budget-(fare+tic_pr);
    }
    else if (people >= 50 && category == "vip")
    {
        fare =0.25*budget;
        tic_pr = people*499.99;
        rem=budget-(fare+tic_pr);
    }
    else if (people >= 50 && category == "normal")
    {
        fare =0.25*budget;
        tic_pr = people*249.99;
        rem=budget-(fare+tic_pr);
    }
    return rem;
}