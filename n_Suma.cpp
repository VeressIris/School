//Să se scrie un program care să citească n numere întregi și să calculeze suma lor.

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("n_suma.in");
ofstream fout ("n_suma.out");

int main()
{
    int n;
    fin >> n;

    int sum = 0;
    int numar;

    for (int i = 0; i < n; i++)
    {
        fin >> numar;
        sum += numar;
    }

    fout << sum;

    return 0;
}
