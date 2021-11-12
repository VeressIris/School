//Se dau două şiruri a şi b, cu n, respectiv m elemente, numere naturale, ordonate strict crescător. Să se afişeze,
// în ordine strict crescătoare, valorile existente în cel puţin unul dintre cele două şiruri. În cazul în care o valoare apare
//în ambele şiruri, va fi afişată o singură dată.

#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ifstream fin("interclasare2.in");
    ofstream fout("interclasare2.out");

    int n;
    fin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    int m;
    fin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        fin >> b[i];
    }

    int intersectie[n + m];
    int i = 0;
    int j = 0;
    int k = 0;
    int x = -1;
    int y = -1;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            x = a[i];
            i++;
            j++;
        }
        if (x != y)
        {
            intersectie[k++] = x;
            y = x;
        }
    }

    for (i = 0; i < k; i++)
    {
        fout << intersectie[i] << ' ';
        if ((i + 1) % 10 == 0)
        {
            fout << endl;
        }
    }

    return 0;
}