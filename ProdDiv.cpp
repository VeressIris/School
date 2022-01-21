// se citeste x, afisati produsul divizorilor care au ultima cifra 3 sau 5

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int prod = 1;
    int cifra;

    for (int i = 3; i <= x; i++)
    {
        cifra = i % 10;

        if (x % i == 0 && (cifra == 3 || cifra == 5))
        {
            prod *= i;
        }
    }

    cout << prod;

    return 0;
}
