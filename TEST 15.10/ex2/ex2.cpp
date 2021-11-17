#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cin >> x >> y;

    int E = (x - y)/(1 + x * y);

    if (x > 0)
    {
        if (y > 0)
        {
           cout << E;
        }
        else
        {
            y *= -1;
            cout << E;
        }
    }
    else
    {
        if (y < 0)
        {
            x *= -1;
            y *= -1;
            cout << E;
        }
        else
        {
            cout << E;
        }
    }

    return 0;
}
