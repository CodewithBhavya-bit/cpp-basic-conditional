#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the coordinates as input: ";
    cin>>x >>y;
    
    if( x<0 && y>0)
    {
      cout<<"the coordinates lies in I quadrant";
    }
    else if( x>0 && y>0)
    {
        cout<<"the coordinates lies in II quadrant";
    }
    else if(x<0 && y<0)
    {
    cout<<"the coordinates lies in III quadrant";
    }
    else if(x>0 && y<0)
    {
        cout<<"the coordinates lies in IV quadrant";
    }
    else
    {
        cout<<"the coordinates lies in origin";
    }

    return 0;

}