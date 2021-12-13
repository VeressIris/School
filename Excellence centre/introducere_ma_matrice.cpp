//Sa se insereze o linie la pozitia k egala cu media aritmetica a liniilor vecine

#include <iostream>

using namespace std;

void inserareRand(int A[][100], int k, int m, int n)
{
    for (int i = m; i >= k; i--)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = A[i - 1][j];
        }
    }
}

void valoriRand(int A[][100], int k, int m)
{
    for (int i = 0; i < m; i++)
    {
        A[k][i] = (A[k + 1][i] + A[k - 1][i]) / 2;
    }
}

void citire(int A[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
}

void afisare(int A[][100], int m, int n)
{
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    int m;
    int n;
    cin >> m >> n;

    int A[100][100];
    citire(A, m, n);

    int k;
    cin >> k;
    k -= 1;

    inserareRand(A, k, m, n);
    valoriRand(A, k, m);

    afisare(A, m, n);

    return 0;
}
