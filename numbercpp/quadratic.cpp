#include<iostream>
using namespace std;
int main()
{
    int a , b, c, discriminant;
    //quadratic equation is = ax^2+bx+c=0
    cout<<"enter value of abc: ";
    cin>>a >>b >>c;

    discriminant = (b*b)-4*a*c;

    if(discriminant>0)
    {
        cout<<"real value";
    }
    
    else if(discriminant==0)
    {
        cout<<"equal value";
    }
    else
    {
        cout<<"imaginary";
    }
    return 0;
}
