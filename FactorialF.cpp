#include <iostream>

using namespace std;

long long int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    long long int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }

    return f;
}
