#include <iostream>
using namespace std;

int main() {
    double amount, discountPercent = 0,  finalPrice;
    int member;
    
    cout<<"enter amount and member :";
    cin >> amount >> member;  

    if(amount > 10000)
    {
        discountPercent = 20;
    }
    else if(amount > 5000)
    {
        discountPercent = 15;
    }
    else if(amount > 2000)
    {
        discountPercent = 10;
    }
    else
    {
        discountPercent = 0;
    }

    if(member == 1)
        discountPercent += 5;

    finalPrice = amount - (amount * discountPercent / 100);

    cout << "Final Price: " << finalPrice;

    return 0;
}
