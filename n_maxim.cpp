//Se dau n numere întregi. Calculaţi cel mai mare dintre cele n numere date.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int nr;
    int MAX = -999999999;

    for (int i = 0; i < n; i++)
    {
        cin >> nr;

        if (MAX < nr)
        {
            MAX = nr;
        }
    }

    cout << MAX;

    return 0;
}
