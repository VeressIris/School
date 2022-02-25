//Un număr este scris în baza de numerație b (b≤10) dacă cifrele sale aparțin intervalului [0,b-1].
//Subprogramul baza are un singur parametru, n, prin care primește un număr natural (n[0,109]). Subprogramul returnează cea mai mică bază din intervalul [2,10] 
//căreia i-ar putea corespunde scrierea lui n. Scrieți definiția completă a subprogramului.

#include <iostream>

using namespace std;

int baza(int n)
{
    int cif;
    int b;
    int maxim = 0;
    while (n != 0)
    {
        cif = n % 10;
        if (cif > maxim)
        {
            maxim = cif;
        }
        n /= 10;
    }

    b = maxim + 1;

    return b;
}

int main()
{
    int n;
    cin >> n;

    cout << baza(n);

    return 0;
}
