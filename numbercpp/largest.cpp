#include<iostream>
using namespace std;
int main()
{
 int number ,digit1, digit2 , digit3 ;
 cout<<"type the number: ";
 cin>>number;

 digit1 =  number/100;
 digit2 = (number/10)%10;
 digit3  = number%10;

 if(digit1 > digit2)
 {
    if(digit1 > digit3)
    {
        cout<<"digit1 is greater: "<<digit1<<endl;
    }
 }
 else if(digit2 > digit3)
  {
    
        cout<<"digit2 is greater :"<< digit2<<endl;
   
  }

  else{
        cout<<"digit3 is greater :"<<digit3<<endl;
    
  }
 
  return 0;

}