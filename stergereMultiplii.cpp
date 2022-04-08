//stergeti dintr-un vector toate numerele care sunt multiplii ai primului element din vector
//daca n este par, inserati apoi in mijlocul vectorului, suma elementelor sterse

#include <iostream>

using namespace std;

void stergere (int v[], int &n, int p)
{
    for (int i = p; i < n - 1; i++)
    {
        v[i] = v[i + 1];
    }
    n--;
}

void inserare(int v[], int &n, int p, int val)
{
    for (int i = n - 1; i >= p; i--)
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
    int N = n;

    int v[100];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] % v[0] == 0)
        {
            sum += v[i];
            stergere(v, n, i);
            i--;
        }
    }

    int mijl = n / 2;
    if (N % 2 == 0)
    {
        inserare(v, n, mijl, sum);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}
