#include<iostream>
using namespace std;
int main()
{
    int input;
    cout<<"enter the number : ";
    cin>>input;

    if(input%2==0 || input%5==0 || input%3==0)
    {
        cout<<"the input is divisible by the divisor ";
    }
    else
    {
        cout<<"the number is not divisible by divisor";
    }

    return 0;
}