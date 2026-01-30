#include<iostream>
using namespace std;
int main()
{
    char let;
    cout<<"enter a letter :";
    cin>>let;

    if(let == 'a'||let == 'e'||let == 'i'||let == 'o'||let == 'u')
    {
        cout<<"the letter is vowel";
    }
    else
    {
        cout<<"the letter is consonant";
    }

    return 0;
}