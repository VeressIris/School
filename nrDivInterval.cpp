// se citesc 2 nr a si b (a < b) avand cel mult 9 cifre fiecare. Afisati cate
//nr din intervalul [a, b] au exact 3 divizori

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cin >> a >> b;

    int nrDiv = 0;
    int nrNumere = 0;

    for (int i = a; i <= b; i++)
    {
        nrDiv = 2; //pt ca orice nr are 2 divizori, 1 si el insusi
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                nrDiv++;
            }
        }

        if (nrDiv == 3)
        {
            nrNumere++;
        }
    }

    cout << nrNumere;

    return 0;
}
