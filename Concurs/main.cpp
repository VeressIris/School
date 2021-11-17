#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x % 4 == 0)
    {
        cout << "alba";
    }
    else if (x % 4 == 1)
    {
        cout << "rosie";
    }
    else if (x % 4 == 2)
    {
        cout << "albastra";
    }
    else if (x % 4 == 3)
    {
        cout << "neagra";
    }

    return 0;
}
