//se citesc n nr folosind subprogramul la ex 2 afisati cate dintre nr citite
//au toate cifrele egale

#include <iostream>

using namespace std;

int identice (int n)
{
    int cif;
    int cif2;

    while(n >= 10)
    {
        cif = n % 10;
        n /= 10;
        cif2 = n % 10;

        if (cif != cif2)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    cin >> n;

    int numar;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> numar;

        if (identice(numar))
        {
            k++;
        }
    }

    cout << k;

    return 0;
}
