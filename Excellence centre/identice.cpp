//Se dau doi vectori cu câte n elemente, numere naturale. Verificați dacă cei doi vectori conțin exact aceleași elemente.

#include <iostream>
#include <algorithm> // for sort function

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }


    sort(a, a + n);
    sort(b, b + n);
    bool identic = true;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            identic = false;
        }
    }

    if (identic == true)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}