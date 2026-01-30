#include<iostream>
using namespace std;
int main()
{
    int month , year;
    cout<<"enter the year : ";
    cin>>year;
    cout<<"enter a valid month number :";
    cin>>month;
    
    if(month==2)
    {
        if(year%4==0)
        {
            cout<<"29";
        }
    }
    else if(year%100 !=0)
    {
        cout<<"28";
    }
    else if(month==1)
    {
        cout<<"31";
    }
     else if(month==3)
    {
        cout<<"31";
    }
    else if(month==4)
    {
        cout<<"30";
    }
    else if(month==5)
    {
        cout<<"30";
    }
    else if(month==6)
    {
        cout<<"30";
    }
    else if(month==7)
    {
        cout<<"31";
    }
    else if(month==8)
    {
        cout<<"31";
    }
    else if(month==9)
    {
        cout<<"30";
    }
    else if(month==10)
    {
        cout<<"31";
    }
    else if(month==11)
    {
        cout<<"30";
    }
    else if(month==12)
    {
        cout<<"31";
    }
    else{
        cout<<"invalid month";
    }
    return 0;
    
}