//Se citesc numere naturale până când se introduce numărul 0.
//Afișați suma obținută prin adunarea numerelor formate din primele două cifre ale numerelor citite.

#include <iostream>

using namespace std;

int oglindit (int n)
{
    int ogl;
    int cif;

    while (n != 0)
    {
        cif = n % 10;
        ogl = ogl * 10 + cif;
        n /= 10;
    }

    return ogl;
}

int main ()
{
    int n = 1;
    int cif;
    int sum = 0;
    int nrNou = 0;
    int temp;
    bool douaCifre = false;

    while (n != 0)
    {
        cin >> n;

        temp = oglindit(n);

        nrNou = 0;
        if (n >= 10)
        {
            for (int i = 0; i < 2; i++)
            {
                cif = temp % 10;
                nrNou = nrNou * 10 + cif;
                temp /= 10;
            }

            douaCifre = true;
        }

        sum += nrNou;
    }

    if (douaCifre == false)
    {
        cout << 0;
    }
    else
    {
        cout << sum;
    }

    return 0;
}