//Se citeste S scrieti-l ca suma cu numar minim de termeni din sirul lui Fibo

#include <iostream>

using namespace std;

int Fib(int n)
{
    int t1 = 1;
    int t2 = 1;
    int t3 = t1 + t2;

    while (t3 <= n)
    {
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }

    return t3 - t1;
}

int main()
{
    int n;
    cin >> n;

    while (n != 0)
    {
        cout << Fib(n) << ' ';
        n -= Fib(n);
    }

    return 0;
}
