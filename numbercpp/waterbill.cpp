#include <iostream>
using namespace std;

int main() {
    double liters, bill = 0;
    cout<<"what is the liters :";
    cin >> liters;

    if(liters <= 5000)
    {
         bill = liters * 2;
    }
    else if(liters <= 10000)
    {
         bill = liters * 3;
    }
    else
    {
         bill = liters * 5;
    }

    if(liters < 3000)
    {
         bill = bill - (bill * 0.15);
    }

    cout << "Total Water Bill: " << bill;

    return 0;
}
