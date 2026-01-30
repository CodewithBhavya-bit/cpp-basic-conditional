#include<iostream>
using namespace std;
int main()
{
    char character , ascii;
    cout<<"type the letter :";
    cin>>character;
    
    ascii = int(character);

    if(ascii > 65 && ascii<=90)
    {
        cout<<"the letter is uppercase"<<ascii<<endl;
    }
    else
    {
        cout<<"the letter is lowercase"<<ascii<<endl;
    }

    return 0;
}
