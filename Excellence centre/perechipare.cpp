//Se dă un interval [l,r]. Aflaţi câte perechi de numere pare se pot forma alegând două numere din interval.

#include <iostream>

using namespace std;

int main ()
{
    int l;
    int r;
    cin >> l >> r;

    long long int perechi = 0;

    for (int i = l; i <= r; i++)
    {
        if (i % 2 == 0)
        {
            perechi++;
        }
    }

    cout << perechi * perechi;

    return 0;
}