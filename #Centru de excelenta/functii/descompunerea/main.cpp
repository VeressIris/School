//Se citeste un nr natural. Descompuneti in factori primi.

#include <iostream>
#include "functie prim.cpp"

using namespace std;

int main()
{
    int n;
    cin >> n;

    int d = 2;
    int ex;

    while (d <= n)
    {
        ex = exponent(n, d);
        if (ex > 0)
        {
            cout << d << "^" << ex << "*";
            d += 1;
        }
    }
    cout << "\b";

    return 0;
}
