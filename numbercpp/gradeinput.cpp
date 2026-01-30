#include<iostream>
using namespace std;
int main()
{
    int inputMarks;
    cout<<"enter the marks of student : ";
    cin>>inputMarks;

    if(inputMarks>=90 && inputMarks<=99)
    {
      cout<<"Grade A";
    }
    else if(inputMarks>=80 && inputMarks<=89)
    {
        cout<<"Grade B";
    }
    else if(inputMarks>=70 && inputMarks<=79)
    {
        cout<<"Grade C";
    }
    else if(inputMarks>=60 && inputMarks<=69)
    {
        cout<<"Grade D";
    }
    else if(inputMarks>=40 && inputMarks<=59)
    {
        cout<<"Grade E";
    }
    else 
    {
        cout<<"Grade F";
    }

    return 0;
    
}