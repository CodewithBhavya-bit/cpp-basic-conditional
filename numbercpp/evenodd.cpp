#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"type the number :";
    cin>>number;

    if(number%2==0)
    {
        cout<<"the number is even";
    }
    else
    {
        cout<<"the number is odd";
    }

    return 0;
}