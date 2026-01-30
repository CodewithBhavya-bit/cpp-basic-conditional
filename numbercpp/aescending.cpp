#include <iostream>
using namespace std;

int main() {
    int num1 , num2 , num3;
    cin >> num1 >> num2 >> num3;

    if (num1 < num2 && num2 < num3)
        cout << "Ascending order" ;
    else if (num1 > num2 && num2 > num3)
        cout << "Descending order ";
    else
        cout << "Neither";

    return 0;
}
