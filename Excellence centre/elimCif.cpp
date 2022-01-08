//Se citeste un nr nat N. eliminati cifrele < k.

#include <iostream>

using namespace std;

int oglindit(int n)
{
    int ogl = 0;
    int cif;

    while (n != 0)
    {
        cif = n % 10;
        ogl = ogl * 10 + cif;
        n /= 10;
    }

    return ogl;
}

int main()
{
    int N;
    int k;
    cin >> N >> k;

    int cif;
    int nr = 0;
    while (N != 0)
    {
        cif = N % 10;

        if (cif >= k)
        {
            nr = nr * 10 + cif;
        }

        N /= 10;
    }

    int nrFinal = oglindit(nr);
    cout << nrFinal;

    return 0;
}
