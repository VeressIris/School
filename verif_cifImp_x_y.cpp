//Se citesc x si y. Determinati cea mai mica cifra a lui x si verificati daca aceasta
//este mai mica decat toate cifrele lui y

#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cin >> x >> y;

    int cifra;
    int cifImp = x;
    bool checkImp = false;
    while (x != 0)
    {
        cifra = x % 10;

        if (cifra % 2 != 0)
        {
            if (cifImp > cifra)
            {
                cifImp = cifra;
            }
            checkImp = true;
        }

        x /= 10;
    }

    bool maiMic = false;

    while (y != 0)
    {
        cifra = y % 10;

        if (cifImp < cifra)
        {
            maiMic = true;
        }

        y /= 10;
    }

    if (checkImp == false)
    {
        cout << "nu exista cifre impare in x";
    }
    else
    {
        if (maiMic == true)
        {
            cout << cifImp << " este mai mic decat toate cifrele lui y";
        }
        else
        {
            cout << cifImp << " nu este mai mic decat toate cifrele lui y";
        }
    }

    return 0;
}
