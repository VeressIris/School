//Se da un nr n, sa se verifice daca cifrele sale sunt ordonate crescator

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool crescator = true;
    int cifra1;
    int cifra2;

    while (n != 0)
    {
        cifra1 = n % 10;
        cifra2 = n/10 % 10;

        if (cifra1 < cifra2)
        {
            crescator = false;
        }

        n /= 10;
    }

    if (crescator == false)
    {
        cout << "nu";
    }
    else
    {
        cout << "da";
    }

    return 0;
}
