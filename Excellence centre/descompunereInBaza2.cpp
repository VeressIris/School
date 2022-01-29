//Sa se descompunere un nr in suma de puteri ale lui 2

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

//prin impartire:
//    int rest;
//    long long int n2 = 0;
//
//    while (n != 0)
//    {
//        rest = n % 2;
//        n /= 2;
//        n2 = n2 * 10 + rest;
//    }
//
//    long long int nf = 0;
//
//    while (n2 != 0)
//    {
//        nf = nf * 10 + n2 % 10;
//        n2 /= 10;
//    }
//
//    cout << nf;

//suma de puteri(de la toma):
    cout << n << "(10) = ";
    while (n != 0)
    {
        int p = 1;
        int k = 0;

        while (p <= n)
        {
            p *= 2;
            k++;
        }

        cout << "2 ^ " << k - 1 << " + ";

        n -= p / 2;
    }

    cout << "\b\b ";

    return 0;
}
