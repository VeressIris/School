//Se dă un vector cu n elemente numere naturale. Să se verifice dacă are elementele ordonate crescător.

#include <iostream>

using namespace  std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool ord = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            ord = false;
        }
    }

    if (ord == true)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}