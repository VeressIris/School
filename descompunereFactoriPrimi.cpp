//Se citesc de la tastatura nr intregi a si b. sa se afiseze descompunerea in factori primi a cmmdc-ului celor 2 nr

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    int rest;
    int cmmdc;

    while(b > 0)
    {
        rest = a % b;
        a = b;
        b = rest;
    }

    cmmdc = a;

    int factor, putere;

    factor = 2;

    while(cmmdc > 1)
    {
        putere = 0;

        while(cmmdc % factor == 0)
        {
            putere++;
            cmmdc /= factor;
        }

        if (putere != 0)
        {
            cout << factor << " apare la puterea " << putere << '\n';
            factor++;
        }
    }

    return 0;
}
