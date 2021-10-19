#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a;
    cout << "What is the mass of a spaceship?" << endl;
    cin >> a;
    a = ((round(a / 3)) - 2) * 300;

    cout << a << endl;

    return 0;
}
