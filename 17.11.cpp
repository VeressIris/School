#include <iostream>

using namespace std;

int main ()
{
    int x;
    cin >> x;

    int uc = x % 10;
    x /= 10;

    while (x != 0)
    {
        if (x % 10 != uc)
        {
            break;
        }
        
        x /= 10;
    }

    if (x != 0)
    {
        cout << "nu";
    }
    else
    {
        cout << "da";
    }

    return 0;
}