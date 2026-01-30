#include <iostream>
using namespace std;

int main() {
    int maths, physics, chemistry;
    cin >> maths >> physics >> chemistry;

    int total = maths + physics + chemistry;

    if(maths >= 80 && physics >= 75 && chemistry >= 75 && total >= 240)
        cout << "Eligible";
    else
        cout << "Not Eligible";

    return 0;
}

