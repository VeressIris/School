#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x % 5 == 0)
    {
        cout << "Deloc";
    }
    else if (x % 5 == 1)
    {
        cout << "Un pic";
    }
    else if (x % 5 == 2)
    {
        cout << "Mult";
    }
    else if (x % 5 == 3)
    {
        cout << "Pasiune";
    }
    else
    {
        cout << "La nebunie";
    }
    return 0;
}
