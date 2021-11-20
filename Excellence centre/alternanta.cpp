//Un vector cu elemente 0 sau 1 se numește alternativ dacă oricum am lua două elemente vecine în vector, cel puțin unul dintre ele este 0.
//Se dă un vector cu n elemente, numere naturale. Verificați dacă vectorul este alternativ.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool alt = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] ==  1 && arr[i + 1] == 1)
        {
            alt = false;
        }
    }

    if (alt == true)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}