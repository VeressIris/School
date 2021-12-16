//Se citec 2 nr nat n si k. Sa se afiseze toate numerele mai mici sau egale cu n care
//au fix k divizori proprii sau un mesaj daca nu exista astfel de nr.

#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;

    int nrDiv;
    bool ok = false;

    for (int i = 1; i <= n; i++)
    {
        nrDiv = 0;
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                nrDiv++;
            }
            if (k == nrDiv)
            {
                cout << i << ' ';
                ok = true;
            }
        }
    }

    if (ok == false)
    {
        cout << "nu exista";
    }

    return 0;
}
