#include<iostream>
using namespace std;
int main()
{
    int angleOne, angleSecond, angleThird, sum;
    cout<<"enter the angles of traiangle";
    cin>>angleOne;
    cin>>angleSecond;
    cin>>angleThird;

    sum = angleOne+angleSecond+angleThird;

    if(sum==180)
    {
        cout<<"it is a valid triangle";
    }
    else
    {
        cout<<"the triangle is invalid";
    }

    return 0;
}