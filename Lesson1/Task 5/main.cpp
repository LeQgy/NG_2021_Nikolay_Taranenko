#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "What is the mass of a spaceship?" << endl;
    cin >> a;
    a = (((a / 3) % 100) - 2) * 300;

    cout << a << endl;

    return 0;
}
