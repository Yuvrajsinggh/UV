// Define an equal to relational operator function named operator = = ( ) that can be used to compare two date classes having data 
// members day, month and year.

#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
    int day, month, year;

public:
    void getdata()
    {
        cout << "\nEnter Day : ";
        cin >> day;
        cout << "\nEnter Month : ";
        cin >> month;
        cout << "\nEnter Year : ";
        cin >> year;
    }

    Date operator == (Date &d)
    {
        if ((day == d.day) && (month == d.month) && (year == d.year))  cout << "\nDate are Equal :) ";
        else cout << "\nDate are not Equal :( ";
    }
};

int main()
{
    Date date1, date2;
    cout << "Please enter the Inputs in Integer only" << "\n";
    cout << "\nData for Date 1 -> ";
    date1.getdata();

    cout << "\nData for Date 2 -> ";
    date2.getdata();

    cout << "\n";
    date1 == date2;
    return 0;
}       