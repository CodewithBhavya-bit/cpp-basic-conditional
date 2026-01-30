#include <iostream>
using namespace std;

int main() {
    double income, tax;
    cout<<"write your correct income:";
    cin >> income;

    if(income <= 250000)
    {
        tax = 0;
    }
    else if(income <= 500000)
    {
        tax = income * 0.05;
    }
    else if(income <= 1000000)
    {
        tax = income * 0.20;
    }
    else
    {
        tax = income * 0.30;
    }

    cout << "Tax Amount: ₹" << tax;
    return 0;
}
