#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"type your age:";
    cin >> age;

    if(age >= 0 && age <= 12)
    {
        cout << "Ticket Price: 100";
    }
    else if(age <= 17)
    {
        cout << "Ticket Price: 150";
    }
    else if(age <= 59)
    {
         cout << "Ticket Price: 200";
    }
    else
    {
        cout << "Ticket Price: 120";
    }

    return 0;
}
