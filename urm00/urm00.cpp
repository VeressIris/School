#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    int u1 = (n / 10) % 10;
    int u2 = n % 10;

    int x = n / 1000;
    int y = (n / 100) % 10;

    if (u2 == 0 && u1 == 0)
    {
        cout << x * 1000 + y * 100 + u1 * 10 + u2;
    }
    else if (n >= 1000)
    {
        y++;
        cout << x * 1000 + y * 100;
    }
    else if (y == 9)
    {
        y++;
        cout << y * 100;
    }
    else if (n >= 100)
    {
        y++;
        cout << y * 100;
    }
    else
    {
        cout << 100;
    }

    return 0;
}