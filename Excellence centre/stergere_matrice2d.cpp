//Se citeste o matrice A cu m linii is n coloane cu elemente intregi. Se citeste un nr k (0 <= k <= m). Sa se stearga linia k.

#include <iostream>

using namespace std;

int main()
{
    int m;
    int n;
    cin >> m >> n;

    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    int k;
    cin >> k;
    k -= 1;

    for (int i = k; i < m - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = A[i + 1][j];
        }
    }

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
