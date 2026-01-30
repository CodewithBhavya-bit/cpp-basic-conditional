#include <iostream>
using namespace std;

int main() {
    int day, month;
    cin >> day >> month;
    int maxDays;
    if(month < 1 || month > 12) {
        cout << "Invalid";
        return 0;
    }
    if(month == 4 || month == 6 || month == 9 || month == 11)
        maxDays = 30;

    else if(month == 2)
        maxDays = 29;   
    else
        maxDays = 31;

    if(day >= 1 && day <= maxDays)
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}
