//Se dă un vector cu n elemente numere naturale. Să se verifice dacă toate elementele vectorului sunt diferite două câte două.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unsigned A[n];

    for (int i = 0; i < n; i++)
    {   
        cin >> A[i];
    }

    bool diferite = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                diferite = false;
                break;
            }
        }
    }

    if (diferite == false)
    {
        cout << "NU";
    }
    else
    {
        cout << "DA";
    }

    return 0;
}
