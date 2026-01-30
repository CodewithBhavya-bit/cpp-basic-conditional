#include<iostream>
using namespace std;
int main()
{
    int numberOne, numberTwo;
    cout<<"enter first number";
    cin>>numberOne;
    cout<<"enter second number";
    cin>>numberTwo;

    if(numberOne>numberTwo)
    {
        cout<<"number one is greater : "<<numberOne<<endl;
    }
    else if(numberOne<numberTwo)
    {
        cout<<"number two is greater : "<<numberTwo<<endl;
    }
    else
    {
       cout<<"both are equal";
    }

    return 0;
}