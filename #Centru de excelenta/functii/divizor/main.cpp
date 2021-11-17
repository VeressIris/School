//Se citesc n nr naturale. Afisati pt fiecare nr divizorii proprii.

#include <iostream>
#include "functie prim.cpp"

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numar;
    for (int i = 1; i <= n; i++)
    {
        cin >> numar;
        afis_div(numar);
    }

    return 0;
}
