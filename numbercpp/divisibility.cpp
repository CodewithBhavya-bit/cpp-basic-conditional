#include<iostream>
using namespace std;
int main()
{
    int  divisor , dividend;
    cout<<"what is the divisor :";
    cin>>divisor;

    cout<<"what is the dividend :";
    cin>>dividend;

    if(dividend%divisor==0)
    {
        cout<<"the dividend is divible by divisor";
    }
    else
    {
        cout<<"the dividend is not divisible by divisor";
    }

    return 0;
}