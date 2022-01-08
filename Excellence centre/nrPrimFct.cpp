#include <iostream>

using namespace std;

int prim(int n)
{
    if (n < 2)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return 0;
    }

    for (int d = 3; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main ()
{
    int a;
    int b;
    cin >> a >> b;

    if (prim(a) && prim(b))
    {
        cout << "ambele sunt prime";
    }
    else if (prim(a) + prim(b) == 1)
    {
        cout << "doar unul este prim";
    }
    else
    {
        cout << "niciunul nu este prim";
    }

    return 0;
}
