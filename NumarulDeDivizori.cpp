//Calculaţi numărul de divizori ai lui n.

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("nrdiv.in");
ofstream fout ("nrdiv.out");

int main()
{
    int n;
    fin >> n;

    int k = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            k++;
        }
    }

    fout << k;

    return 0;
}
