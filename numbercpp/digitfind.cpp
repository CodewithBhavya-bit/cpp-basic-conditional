#include<iostream>
using namespace std;
int main()
{
    int digit;
    cout<<"enter the digit: ";
    cin>>digit;

    if(digit<=9)
    {
        cout<<"the digit lie between (0-9) single digit";
    }
    else if(digit>=9)
    {
        cout<<"the digit lie between (10-99) double digit";
    }
    else{
        cout<<"the digit is more than two ";
    }
    return 0;
}