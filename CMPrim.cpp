//se citesc n nr calculati cel mai mare nr prim citit

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numar;
    int CMPrim = 0;
    int prim;
    for (int i = 1; i <= n; i++)
    {
        cin >> numar;

        prim = 1;
        for (int j = 2; j < sqrt(numar); j++)
        {
            if (numar % j == 0)
            {
                prim = 0;
                break;
            }
        }

        if (prim == 1)
        {
            if (numar > CMPrim)
            {
                CMPrim = numar;
            }
        }
    }

    cout << CMPrim;

    return 0;
}
