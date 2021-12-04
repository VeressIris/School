#include <iostream>

using namespace std;

void rama (int A[100][100], int l1, int c1, int lx, int cx)
{
    for (int j = c1; j < cx; j++)
    {
        cout << A[l1][j] << ' ';
    }

    for (int i = l1; i < lx; i++)
    {
        cout << A[i][cx] << ' ';
    }

    for (int j = cx; j > c1; j--)
    {
        cout << A[lx][j] << ' ';
    }

    for (int i = lx; i > l1; i--)
    {
        cout << A[i][c1] << ' ';
    }
}

int main()
{
    int m;
    int n;
    cin >> m >> n;

    int A[100][100];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    //parcurgere serpuita pe linii
    cout << "parcurgere serpuita pe linii: " << '\n';
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << A[i][j] << ' ';
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << A[i][j] << ' ';
            }
        }
    }

    cout << '\n';

    //PSSUL
    cout << "parcurgere serpuita de pe ultima linie: " << '\n';
    for (int i = m - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << A[i][j] << ' ';
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << A[i][j] << ' ';
            }
        }
    }

    cout << '\n';

    //PSSC
    cout << "parcurgere serpuita pe coloane: " << '\n';
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << A[i][j] << ' ';
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << A[i][j] << ' ';
            }
        }
    }

    cout << '\n';

    //PSSUC
    cout << "parcurgere serpuita de pe ultima coloana: " << '\n';
    for (int j = n - 1; j >= 0; j--)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << A[i][j] << ' ';
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << A[i][j] << ' ';
            }
        }
    }

    cout << '\n';

    //PSPIR
    int c1 = 0;
    int l1 = 0;
    int cx = n - 1;
    int lx = m - 1;

    cout << "parcurgere spiralata: " << '\n';

    while (c1 <= cx && l1 <= lx)
    {
        rama(A, l1, c1, lx, cx);
        l1++;
        c1++;
        lx--;
        cx--;
    }
    //PSPIR2

    return 0;
}
