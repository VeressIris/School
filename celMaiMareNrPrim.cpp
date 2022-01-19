//Se citesc n numere, afisati cel mai mare numar prim citit.

#include <iostream>
#include <climits> //INT_MIN

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numar;
    int maxim = INT_MIN;
    bool prim = true;

    for (int i = 1; i <= n; i++)
    {
        cin >> numar;
        prim = true;

        for (int j = 2; j * j <= numar; j++)
        {
            if (numar % j == 0)
            {
                prim = false;
                break;
            }
        }

        if (prim == true && numar > maxim)
        {
            maxim = numar;
        }
    }

    cout << maxim;

    return 0;
}
