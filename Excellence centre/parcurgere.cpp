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

    //parcurgere pe coloana
    cout << "parcurgere pe coloane: " << '\n';

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << A[i][j] << ' ';
        }
    }

    cout << '\n';

    //parcurgere inversa pe coloana
    cout << "parcurgere inversa pe coloane: " << '\n';

    for (int j = 0; j < n; j++)
    {
        for (int i = m - 1; i >= 0; i--)
        {
            cout << A[i][j] << ' ';
        }
    }

    cout << '\n';

    //parcurgere inversa de pe ultima coloana
    cout << "parcurgere inversa pe coloane: " << '\n';

    for (int j = n - 1; j >= 0; j--)
    {
        for (int i = m - 1; i >= 0; i--)
        {
            cout << A[i][j] << ' ';
        }
    }

    cout << '\n';

    //parcurgere pe linii
    cout << "parcurgere pe linii: " << '\n';

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << ' ';
        }
    }

    cout << '\n';

    //parcurgere inversa pe linii
    cout << "parcurgere inversa pe linii: " << '\n';

    for (int i = 0; i < m; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << A[i][j] << ' ';
        }
    }

    cout << '\n';

    //parcurgere inversa de pe ultima linie
    cout << "parcurgere inversa de pe ultima linie: " << '\n';

    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << A[i][j] << ' ';
        }
    }

    return 0;
}
