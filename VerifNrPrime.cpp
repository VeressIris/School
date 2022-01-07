//se citesc n nr. afisati in dreptul fiecarui nr daca este prim sau nu

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numar;
    int prim = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> numar;

        prim = 1;
        for (int j = 2; j <= numar / 2; j++)
        {
            if (numar % j == 0)
            {
                prim = 0;
                break;
            }
        }

        if (prim == 1)
        {
            cout << numar << " prim" << '\n';
        }
        else
        {
            cout << numar << " nu e prim" << '\n';
        }
    }

    return 0;
}
