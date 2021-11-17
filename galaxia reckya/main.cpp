#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;

    if (m % 4 == 0)
    {
        cout << 1;
    }
    else if (m % 4 == 1)
    {
        cout << 2;
    }
    else if (m % 4 == 2)
    {
        cout << 3;
    }
    else if (m % 4 == 3)
    {
        cout << 4;
    }

    return 0;
}
