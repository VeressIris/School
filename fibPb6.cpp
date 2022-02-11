//Se citeste n<95, afisati in fisierul fibo_prim.out toate numerele prime din primii n termeni ai sirului lui Fibo

#include <iostream>
#include <fstream>

using namespace std;

ofstream fout ("fibo_prim.out");

int main()
{
    int n;
    cin >> n;

    int t1 = 1;
    int t2 = 1;
    int t3;

    fout << 1 << ' ' << 1 << ' ';

    for (int i = 3; i <= n; i++)
    {
        t3 = t1 + t2;
        if (t3 % 2 != 0)
        {
            fout << t3 << ' ';
        }
        t1 = t2;
        t2 = t3;
    }

    return 0;
}
