#include <iostream>
using namespace std;

int main() {
    double salary, incrementPercent;
    int rating, years;

    cout<<"write your salary , rating and years of experience";
    cin >> salary >> rating >> years;

    if(rating == 5)
    {
         incrementPercent = 20;
    }
    else if(rating == 4)
    {
         incrementPercent = 15;
    }
    else if(rating == 3)
    {
        incrementPercent = 10;
    }
    else if(rating == 2)
    {
         incrementPercent = 5;
    }
    else
        incrementPercent = 0;

    if(years > 5)
        incrementPercent += 5;
    double newSalary = salary + (salary * incrementPercent / 100);

    cout << "New Salary: " << newSalary;

    return 0;
}
