//din fisierul numere.in se citesc numere nat. (cel mult 1000000 de numere) numere ce sunt formate din cifra 1 urmata de cel mult 19 cifre
//de 0 (toate nr din fisier sunt puteri ale lui 10). Se cere:
//a) Sa se afiseze in fisierul numere.out puterea lui 10 care a aparut de cele mai multe ori in fisier. Daca exista mai multe puteri cu nr maxim
//de aparitii se vor afisa toate
//b) Sa se afiseze cea mai mare putere
//ex: intrare: 10000 10 1 1 1000 10000000000000000000 1000000000000000000 100000000000000000 10 10
//    iesire: 0 1
//            16

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("numere.in");
ofstream fout ("numere.out");

int main()
{
    unsigned long long int n;
    int vf[20] = {0}; //vector in care stocam puterile lui 10 (de la 0 la 19)
    int k = 0;

    //a)
    while (fin >> n)
    {
        k = 0;

        while (n % 10 == 0)
        {
            n /= 10;
            k++;
        }

        vf[k]++;
    }

    int maxim  = 0;

    for (int i = 0; i <= 19; i++)
    {
        if (vf[i] > maxim)
        {
            maxim = vf[i];
        }
    }

    for (int i = 0; i <= 19; i++)
    {
        if (vf[i] == maxim)
        {
            fout << i << ' ';
        }
    }
    fout << '\n';

    //b)
    for (int i = 19; i >= 0; i--)
    {
        if (vf[i] == 0)
        {
            fout << i << '\n';
            break;
        }
    }

    return 0;
}
