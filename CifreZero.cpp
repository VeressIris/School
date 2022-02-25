#include <iostream>

using namespace std;

int nr_cif_zero(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int nrCif = 0;

    while (n != 0)
    {
        if (n % 10 == 0)
        {
            nrCif++;
        }
        n /= 10;
    }

    return nrCif;
}
