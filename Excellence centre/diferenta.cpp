//Se citesc 2 siruri v1 si v2. Sa se transforme sirurile in multimi si apoi sa se construiasca diferenta acestora

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

    int w[200];

    for (int i = 0; i < n; i++)
    {
        w[i]=v1[i];
    }

    int p = 0;
    int size = 0;
    
    for (int i = 0; i < n; i++)
    {
        if( !este(v1[i], v2, m)) // daca a[i] este in b
        {
            w[p++]= v1[i];
            size++;
        }
    }

    unicat(w, size);
    for (int i = 0; i < size; i++)
    {
        cout << w[i] << ' ';
    }

    return 0;
}
