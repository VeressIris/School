//Se citeste un nr n de maxim 9 cifre de la tastatura. sa se afiseze factorii primi care apar la o putere para in descompunerea lui
//Daca nu exista astfel de factori, se va afisa "NU EXISTA"

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int p;
    int f = 2;
    int k = 0;

    while (n > 1)
    {
        p = 0;

        while (n % f == 0)
        {
            n /= f;
            p++;
        }

        if (p % 2 == 0 && p != 0)
        {
            cout << "factorul " << f << " apare la puterea para" << '\n';
            k++;
        }

        f++;
    }

    if (k == 0)
    {
        cout << "NU EXISTA";
    }

    return 0;
}
