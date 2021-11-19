#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int a = 0; //suma pătratelor cifrelor lui n
    int b = 0; //suma cifrelor impare ale lui n
    int c = 0; // suma cifrelor divizibile cu 3 ale lui n
    int d = 0; // numărul cifrelor strict mai mari decât 5
    int e = 1; // produsul cifrelor nenule ale lui n
    int f = 0; // suma dintre cifra cea mai puțin semnificativă (cifra unităților) lui n și cifra cea mai semnificativă a lui n
    
    int nr_cif = 0;
    int temp_n = n;

    while (temp_n != 0)
    {
        nr_cif++;
        temp_n /= 10;
    }
    nr_cif -= 1;
    f = n / pow(10, nr_cif) + n % 10;
   
    int cifra;
    while (n != 0)
    {
        cifra = n % 10;

        a += cifra * cifra;

        if (cifra % 2 == 1)
        {
            b += cifra;
        }
        if (cifra % 3 == 0)
        {
            c += cifra;
        }
        if (cifra > 5)
        {
            d++;
        }
        if (cifra != 0)
        {
            e *= cifra;
        }

        n /= 10;
    }

    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f;

    return 0;
}