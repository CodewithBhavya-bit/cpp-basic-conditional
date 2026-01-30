#include<iostream>
using namespace std;
int main()
{
    int sideOne, sideTwo , sideThree;
    cout<<"enter the three sides of triangle : ";
    cin>>sideOne >>sideTwo >>sideThree;

    if(sideOne==sideTwo && sideTwo==sideThree)
    {
        cout<<"this is an equilateral triangle";
    }
    else if(sideOne==sideTwo || sideTwo==sideThree || sideOne==sideThree)
    {
        cout<<"this is an Isosceles triangle";
    }
    else
    {
        cout<<"this is a Scalene ";
    }

    return 0;
}