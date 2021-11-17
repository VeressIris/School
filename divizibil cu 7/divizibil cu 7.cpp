#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cin >> x >> y;

    if (x % 7 == 0 && y % 7 == 0)
    {
        if (y % 7 == 0)
        {
            cout << x << endl;
            cout << y << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
    else
    {
        cout << "niciunul nu e divizibil cu 7";
    }

    return 0;
}
