//Functia FactPrimMax are un parametru:
//• n, prin care primește un număr natural
//Functia calculeaza cel mai mare factor prim al lui n.
//Scrieți definiția completă a functiei.

#include <iostream>

using namespace std;

int FactPrimMax(int n)
{
    int f = 2;
    int p;
    int maxim = 0;

    while (n > 1)
    {
        p = 0;
        while (n % f == 0)
        {
            p++;
            n /= f;
        }
        if (p != 0 && f > maxim)
        {
            maxim = f;
        }

        f++;
    }

    return maxim;
}

int main()
{
    int n;
    cin >> n;
    cout << FactPrimMax(n);

    return 0;
}
