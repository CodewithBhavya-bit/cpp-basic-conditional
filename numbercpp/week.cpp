#include<iostream>
using namespace std;
int main()
{
    int numberInput;
    cout<<"enter a number : ";
    cin>>numberInput;

    if(numberInput==1)
    {
        cout<<"its MONDAY";
    }
    else if(numberInput==2)
    {
        cout<<"its TUESDAY";
    }
    else if(numberInput==3)
    {
        cout<<"its WEDNESDAY";
    }
    else if(numberInput==4)
    {
        cout<<"its THURSDAY";
    }
    else if(numberInput==5)
    {
        cout<<"its FRIDAY";
    }
    else if(numberInput==6)
    {
        cout<<"its SATURDAY";
    }
    else if(numberInput==7)
    {
        cout<<"its SUNDAY";
    }
    else 
    {
        cout<<"invalid";
    }
    return 0;
}