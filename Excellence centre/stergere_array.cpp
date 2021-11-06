//Se citeste un sir de numere int. Sa se stearga din sir toate numerele prime si apoi dupa
//fiecare numar impar sa se introduca dublul acestuia.

#include <iostream>

using namespace std;

int e_prim(int n)
{
    int d;

    if (n < 2)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if(n % 2 == 0)
    {
        return 0;
    }

    for (d = 3; d * d <= n; d += 2)
    {
        if (n % d == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int v[200];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (e_prim(v[i]))
        {
            for (int j = i + 1; j <= n - 1; j++)
            {
                v[j - 1] = v[j];
            }
            n -= 1;
        }
    }


    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 1)
        {
            for (int j = n - 1; j > i; j--)
            {
                v[j + 1]= v[j];
            }

            v[i + 1]= v[i] * 2;

            n++;
        }
    }

    for (int i=0; i<n; i++)
    {
        cout<<v[i] << " ";
    }

    return 0;
}
