// (a-b) U (b-a)
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

//se afiseaza diferentele una dupa alta
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    unicat(a, n);
    unicat(b, m);

    int dif1[200]; // a-b

    for (int i = 0; i < n; i++)
    {
        dif1[i]=a[i];
    }

    int p = 0;
    int size = 0;
    
    for (int i = 0; i < n; i++)
    {
        if( !este(a[i], b, m)) // daca a[i] este in b
        {
            dif1[p++]= a[i];
            size++;
        }
    }

    unicat(dif1, size);
    for (int i = 0; i < size; i++)
    {
        cout << dif1[i] << ' ';
    }

    int dif2[200]; // b-a
    for (int i = 0; i < n; i++)
    {
        dif2[i]=b[i];
    }

    p = 0;
    size = 0;
    
    for (int i = 0; i < n; i++)
    {
        if( !este(b[i], a, m)) // daca b[i] este in a
        {
            dif2[p++]= b[i];
            size++;
        }
    }

    unicat(dif2, size);
    for (int i = 0; i < size; i++)
    {
        cout << dif2[i] << ' ';
    }

    return 0;
}