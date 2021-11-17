#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    cin >> x >> y >> z;

    if (x % 2 == 0)
    {
        cout << x << ' ' << "PAR" << endl;
    }
    else
    cout << x << ' ' << "IMPAR" << endl;

    if (y % 2 == 0)
    {
        cout << y << ' ' << "PAR" << endl;
    }
    else
    cout << y << ' ' << "IMPAR" << endl;

    if (z % 2 == 0)
    {
        cout << z << ' ' << "PAR" << endl;
    }
    else
    cout << z << ' ' << "IMPAR" << endl;

    return 0;
}
