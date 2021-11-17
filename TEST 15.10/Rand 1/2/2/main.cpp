#include <iostream>

using namespace std;

int main()
{
    float x;
    float F;
    cin >> x;

    if (x < 5)
    {
        cout << x * x - 3;
    }
    else if (x >= 5 && x <= 25)
    {
        cout << x +1;
    }
    else
    {
        cout << x * x - 5 * x + 6;
    }

    return 0;
}
