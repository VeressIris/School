//Se da un sir de elemente de n numere naturale. Sa se verifice daca A este o multime

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

    bool multime = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                multime = false;
            }
        }
    }

    if (multime == false)
    {
        cout << "NU";
    }
    else
    {
        cout << "DA";
    }

    return 0;
}
