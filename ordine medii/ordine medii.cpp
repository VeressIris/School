#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x % 25 == 0)
    {
        cout << "A";
    }
    else if (x % 25 == 1)
    {
        cout << "B";
    }
    else  if (x % 25 == 2)
    {
        cout << "C";
    }
    else if (x % 25 == 3)
    {
        cout << "D";
    }
    else
    {
        cout << "E";
    }

    return 0;
}
