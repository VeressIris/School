//Se da o matrice patrata. Ordonati elementele de pe diagonala doar prin interschimbare de linii/coloane.

#include <iostream>

using namespace std;

void schimbLin(int A[][100], int lin, int col, int l1, int l2)
{
    for (int j = 0; j < col - 1; j++)
    {
        swap(A[l1][j], A[l2][j]);
    }
}

void schimbCol(int A[][100], int lin, int col, int c1, int c2)
{
    for (int i = 0; i < lin; i++)
    {
        swap(A[i][c1], A[i][c2]);
    }
}

int main()
{
    int m;
    cin >> m;
    int n = m;

    int A[m][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << '\n';

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (A[i][i] > A[j][j])
            {
                schimbLin(A, m, n, i, j);
                schimbCol(A, m, n, i, j);
            }
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
