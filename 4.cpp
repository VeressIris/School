//Subprogramul divizor are patru parametri:
// • a, b și k, prin care primește câte un număr natural
//Functia returneaza numărul de valori naturale din intervalul [a,b] care sunt divizibile cu k și au
//ultima cifră egală cu k. Scrieți definiția completă a subprogramului.
//Exemplu: dacă a=3, b=50 și k=4, în urma apelului, nr=3 (pentru numerele 4, 24, 44).

#include<iostream>

using namespace std;

int divizor (int a, int b, int k)
{
    int nrDiv = 0;

    for (int i = a; i <= b; i++)
    {
        if (i % k == 0 && i % 10 == k)
        {
            nrDiv++;
        }
    }

    return nrDiv;
}

int main()
{
    int a;
    int b;
    int k;
    cin >> a >> b >> k;

    cout << divizor(a, b, k);

    return 0;
}
