//Se citeste un nr n. Sa se formeze nu nr doar cu cifrele pare ale lui n.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numar = 0;
    int numarFinal = 0;
    int cifra;

    while (n != 0)
    {
        cifra = n % 10;

        if (cifra % 2 == 0)
        {
            numar = cifra + numar * 10;
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
