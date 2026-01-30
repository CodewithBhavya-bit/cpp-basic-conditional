#include <iostream>
using namespace std;

int main() {
    float weight, distance ,cost = 50; 
    
    cout<<"type weight and dictance :";
    cin >> weight >> distance;

    if(weight > 5)
    {
         cost = cost + weight * 10;
    }

    if(distance > 100)
    {
        cost = cost + distance * 5;
    }

    if(weight > 5 && distance > 100)
    {
        cost = cost + 20;
    }

    cout << "Total Shipping Cost: " << cost;

    return 0;
}
