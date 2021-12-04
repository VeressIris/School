//sa se citeasca si sa se afiseze o matrice A de m x n elem intregi

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
