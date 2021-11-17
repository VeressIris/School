#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = n / 100;
    int y = (n / 10) % 10;
    int z = n % 10;

    if (x < y && x < z)
    {
        cout << x << y << z;
    }
    else if (y < x && y < z)
    {
        if (x > z)
        {
            cout << y << z << x;
        }
        else
        {
            cout << y << x << z;
        }
    }
    else if (z < x && z < y)
    {
        if (x > y)
        {
            cout << z << y << x;
        }
        else
        {
            cout << z << x << y;
        }
    }
    else
    {
        cout << n;
    }
    return 0;
}
