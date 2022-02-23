//se citesc 3 nr a b si c folosind functiile scrise la ex 1 afisati pt
//fiecare nr suma div sai care nu sunt primi

#include <iostream>

using namespace std;

int prim(int n)
{
    if (n < 2)
    {
        return 0;
    }
    if (n % 2 == 0 && n != 2)
    {
        return 0;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int suma(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && prim(i) == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;

    cout << a << ' ' << suma(a) << '\n';
    cout << b << ' ' << suma(b) << '\n';
    cout << c << ' ' << suma(c) << '\n';

    return 0;
}
