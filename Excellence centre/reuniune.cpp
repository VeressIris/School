//Se citesc 2 siruri v1 si v2. Sa se transforme sirurile in multimi si apoi sa se construiasca multimea W = v1 u v2

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

int este(int val, int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == val)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int n;
    int m;
    int r[200];

    cin >> n;

    int v1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    cin >> m;

    int v2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    unicat(v1, n);
    unicat(v2, m);

    int size = n;
    for (int i = 0; i < n; i++)
    {
        r[i]=v1[i];
    }

    for (int i = 0; i < m; i++)
    {
        if(!este(v2[i], v1, n)) // daca nu este b[i] in A
        {
            r[n++] = v2[i];
            size++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << r[i] << ' ';
    }

    return 0;
}
