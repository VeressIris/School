//se citeste un numar. determinati daca este prim cu oglinditul sau

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;
    int oglindit = 0;
    int cif;

    while (temp != 0)
    {
        cif = temp % 10;
        oglindit = oglindit * 10 + cif;
        temp /= 10;
    }

    int rest;
    while (oglindit != 0)
    {
        rest = n % oglindit;
        n = oglindit;
        oglindit = rest;
    }

    if (n == 1)
    {
        cout << "prime intre ele";
    }
    else
    {
        cout << "nu sunt prime intre ele";
    }

    return 0;
}
