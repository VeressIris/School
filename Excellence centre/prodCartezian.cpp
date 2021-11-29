#include <iostream>

using namespace std;

void unicat (int v[], int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                for (int k = j + 1; k < n; k++)
                {
                    v[k - 1] = v[k];
                }
                n--;
                j--;
            }
        }
    }
}

int main ()
{
    int n;
    cin >> n;

    int v1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    int m;
    cin >> m;

    int v2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    unicat(v1, n);
    unicat(v2, m);
    
    //afisare ficare pereche
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "(" << v1[i] << ", " << v2[j] << ")" << '\n';
        }
    }

    return 0;
}