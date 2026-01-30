#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"type the number :";
    cin>>number;

    if(number > 0)
    {
        cout<<"the number is positive";
    }
    else if(number < 0)
    {
       cout<<"the number is negative";
    }
    else
    {
        cout<<"the number is zero";
    }

    return 0;

}