//Se citeste un nr natural n. Sa se formeze un nou numar in care fiecare cifra para a lui n este inlocuita cu cifra impara imediat urmatoare, iar fiecare cifra impara 
//cu cifra para mai mica decat ea.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numar = 0;
    int numarFinal = 0;
    int schimbPar;
    int schimbImp;
    int cifra;

    while (n != 0)
    {
        cifra = n % 10;

        if (cifra % 2 == 0)
        {
            schimbPar = cifra + 1;
            numar = schimbPar + numar * 10;
        }
        else
        {
            schimbImp = cifra - 1;
            numar = schimbImp + numar * 10;
        }
        n /= 10;
    }

    while (numar != 0)
    {
        numarFinal = numar % 10 + numarFinal * 10;
        numar /= 10;
    }

    cout << numarFinal;

    return 0;
}
