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

void afis_div (int n)
{
    int d;
    for (d = 2; d * d < n; d++)
    {
        if (n % d == 0)
        {
            cout << d << ' ' << n / d << ' ';
        }
    }
    if (d * d == n)
    {
        cout << d;
    }
    cout << endl;
}

int cmmdc (int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int exponent (int & n, int d)
{
    int ex = 0;
    while (n % d == 0)
    {
        ex++;
        n /= d;
    }

    return ex;
}
