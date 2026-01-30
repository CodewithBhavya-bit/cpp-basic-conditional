#include<iostream>
using namespace std;
int main()
{
    char character , ascii;
    cout<<"type the character input :";
    cin>>character;
    
    ascii = int(character);

    if(ascii > 65 && ascii<=90)
    {
        cout<<"the range is A-Z";
    }
    else if( ascii>97 && ascii<=122)
    {
        cout<<"the range is a-z";
    }
    else
    {
        cout<<"digit";
    }
    return 0;
}