#include<iostream>
using namespace std;
int main()
{
    int number , num1,num2;

    cout<<"type a two digit number :";
    cin>>number;

    num1 = number/10;
    num2 = number%10;

    if(num1==num2)
    {
        cout<<"the given number is parallelogram";
    }
    else
    {
       cout<<"the given number is not parallelogram ";
    }

    return 0;
}