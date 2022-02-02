//Se citesc de la tastatură două numere x și y. Să se afișeze în fișierul "cmmdc.out" cel mai mare divizor al celor două numere.
//Dacă cele două numere sunt prime între ele ( adică (x,y)=1 ) se va afișa "PIE"

#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("cmmdc.out");

int main()
{
    int x;
    int y;
    cin >> x >> y;

    int rest;

    while (y != 0)
    {
        rest = x % y;
        x = y;
        y = rest;
    }

    if (x == 1)
    {
        fout << "PIE";
    }
    else
    {
        fout << x;
    }

    return 0;
}
