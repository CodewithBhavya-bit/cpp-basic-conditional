#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"type the year here: ";
    cin>>year;

    if(year%4 == 0 && year%100 != 0)
    {
        cout << "The given year is a leap year";
    }
    else if(year % 400 == 0)   
    {
        cout << "The given year is a leap year";
    }
    else
    {
        cout << "The given year is not a leap year";
    }
     return 0;
}