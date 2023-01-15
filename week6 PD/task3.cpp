#include <iostream>
using namespace std;

string sign(int day, string month);

main()
{
    int day;
    string month;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the month in small letters: ";
    cin >> month;
    string results = sign(day, month);
    cout << "Your Zodiac sign is: " << results;
}

string sign(int day, string month)
{
    string signs;
    if (day >= 21 || day <= 19 && month == "march")
    {
        if ( && month == "april")
            signs = "Aries";
    }
    if (day >= 20 && month == "april")
    {
        if (day < 20 && month == "may")
            signs = "Taurus";
    }
    if (day >= 21 && month == "may")
    {
        if (day <= 20 && month == "june")
            signs = "Gemini";
    }
    if (day >= 21 && month == "june")
    {
        if (day <= 22 && month == "july")
            signs = "Cancer";
    }
    if (day >= 23 && month == "july")
    {
        if (day <= 22 && month == "august")
            signs = "Leo";
    }
    if (day >= 23 && month == "august")
    {
        if (day <= 22 && month == "september")
            signs = "Virgo";
    }
    if (day >= 23 && month == "september")
    {
        if (day <= 21 && month == "october")
            signs = "Libra";
    }
    if (day >= 22 && month == "october")
    {
        if (day <= 21 && month == "november")
            signs = "Scorpio";
    }
    if (day >= 22 && month == "november")
    {
        if (day <= 21 && month == "december")
            signs = "Sagittarius";
    }
    if (day > 22 && month == "december")
    {
        if (day < 19 && month == "january")
            signs = "Capricon";
    }
    if (day > 20 && month == "january")
    {
        if (day < 18 && month == "february")
            signs = "Aquaris";
    }
    if (day >= 19 && month == "february")
    {
        if (day <= 20 && month == "march")
            signs = "Pisces";
    }
    return signs;
}