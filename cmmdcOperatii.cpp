//Se citesc a si b (nr de tip int) calculati CMMDC dintre produsul
//cifrelor lui a si oglinditul lui b

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    int cif;
    int prod = 1;
    while (a != 0)
    {
        cif = a % 10;
        prod *= cif;
        a /= 10;
    }

    int oglindit = 0;
    while (b != 0)
    {
        cif = b % 10;
        oglindit = oglindit * 10 + cif;
        b /= 10;
    }

    int rest;
    while (oglindit != 0)
    {
        rest = prod % oglindit;
        prod = oglindit;
        oglindit = rest;
    }

    cout << prod;

    return 0;
}
