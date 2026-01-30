#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age :";
    cin>>age;

    if (age>=18)
    {
        cout<<"the person is eligible";
    }
    else
    {
        cout<<"the person is not eligible";
    }
    return 0;
}