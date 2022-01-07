//se citeste un nr nat x verificati daca suma cifrelor lui e un nr prim

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int sum = 0;
    int cif;
    while(x != 0)
    {
        cif = x % 10;
        sum += cif;
        x /= 10;
    }

    int prim = 1;
    for (int i = 2; i <= sum / 2; i++)
    {
        if (sum % i == 0)
        {
            prim = 0;
            break;
        }
    }

    if (prim == 1)
    {
        cout << "suma cifrelor este prima";
    }
    else
    {
        cout << "suma cifrelor nu este prima";

    }

    return 0;
}
