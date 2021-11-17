//Se consideră trei șiruri de numere naturale a = (a1, a2, ..., an), b = (b1, b2, ..., bn) și c = (c1, c2, ..., cn). Toate cele trei
//șiruri sunt ordonate crescător.
//Să se determine un număr care apare în cele trei șiruri. Dacă există mai multe astfel de numere, să se determine cel mai mic. 
//Dacă nu există un număr comun celor trei șiruri, afișați valoarea -1.

#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    for ( int j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    int c[n];
    for (int k = 0; k < n; k++)
    {
        cin >> c[k];
    }

    int x = a[0];
    int minComun = -1;
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < n && k < n)
    {
        if (a[i] == x && b[j] == x && c[k] == x)
        {
            minComun = x;
            break;
        }
        if (a[i] < x)
        {
            i++;
        }
        else if (a[i] > x)
        {
            x = a[i];
        }
        if (b[j] < x)
        {
            j++;
        }
        else if (b[j] > x)
        {
            x = b[j];
        }
        if (c[k] < x)
        {
            k++;
        }
        else if (c[k] > x)
        {
            x = c[k];
        }
    }

    cout << minComun;

    return 0;
}