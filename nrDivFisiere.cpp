//Se citesc din fișierul "problema.in" un număr n, iar apoi n numere întregi. Să se afișeze pe ecran
//câte din numerele citite îl divid pe n.

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("problema.in");

int main()
{
    int n;
    fin >> n;

    int numar;
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        fin >> numar;

        if (n % numar == 0)
        {
            k++;
        }
    }

    cout << k;

    return 0;
}
