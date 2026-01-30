#include<iostream>
using namespace std;
int main()
{
    int number , num1 , num2 , num3, reverse;
    cout<<"type the number to check :";
    cin>>number;

    num1 = number/100;
    num2 = (number/10)%10;
    num3 = number%10;
    
    reverse = (num3*100)+(num2*10)+num1;

    if(number==reverse)
    {
        cout<<"the given number is palindrome";
    }
    else
    {
        cout<<"the given number is not palindrome";
    }
    
    return 0;

}