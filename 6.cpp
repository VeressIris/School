//Subprogramul prodprim are un parametru:
 //• n, prin care primește un număr natural
// Subprogramul returneaza produsul divizorilor primi ai lui n.
//Scrieți definiția completă a subprogramului. Se va utiliza o functie ptr numere prime, separat de
//functia ceruta

#include <iostream>

using namespace std;

int prim(int n)
{
    if (n < 2)
    {
        return 0;
    }
    if (n != 2 && n % 2 == 0)
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

int prodprim(int n)
{
    int prod = 1;
    for (int i = 2; i <= n; i++)
    {
        if (prim(i) && n % i == 0)
        {
            prod *= i;
        }
    }

    return prod;
}

int main()
{
    int n;
    cin >> n;

    cout << prodprim(n);

    return 0;
}
