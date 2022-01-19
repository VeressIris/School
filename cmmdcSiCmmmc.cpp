//Se citesc 3 numere a, b si c afisati CMMDC-ul lor si CMMMC-ul lor

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;

    int a1 = a;
    int b1 = b;
    int c1 = c;

    int rest;
    while (b != 0)
    {
        rest = a % b;
        a = b;
        b = rest;
    }

    int d = a;
    while (c != 0)
    {
        rest = d % c;
        d = c;
        c = rest;
    }
    cout << d << '\n';

    int cmmmc = (a1 * b1) / d;
    cout << cmmmc;

    return 0;
}
