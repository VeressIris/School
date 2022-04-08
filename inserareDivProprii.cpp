#include <iostream>
#include <algorithm>

using namespace std;

void afisare(int v[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << ' ';
    }
}

void inserare(int v[], int &n, int p, int val)
{
    for (int i = n; i >= p; i--)
    {
        v[i + 1] = v[i];
    }
    n++;
    v[p] = val;
}

int main()
{
    int n;
    cin >> n;

    int v[100];
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int nrDiv = 0;
    for (int i = 1; i <= n; i++)
    {
        nrDiv = 0;
        for (int d = 2; d <= v[i] / 2; d++)
        {
            if (v[i] % d == 0)
            {
                inserare(v, n, i + 1, d);
                nrDiv++;
            }
        }
        i += nrDiv;
    }

    afisare(v, n);
    cout << '\n';

    sort(v, v + n + 1, greater<int>());
    afisare(v, n);

    return 0;
}
