//afisati cifrele de pe pozitiile impare
#include <iostream>

using namespace std;

int main ()
{
    int x;
    cin >> x;

    int uc;
    int k = 0;
    int nr = 0;

    while (x != 0)
    {
        uc = x % 10;
        x /= 10;

        if (k % 2 == 1)
        {
            nr = nr * 1 + uc;
        }
        k++;
    }

    while (nr != 0)
    {
        x = x * 10 + nr % 10;
        nr /= 10;
    }

    cout << x;

    return 0;
}