#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numar;
    int cifra;
    int maxim;
    int k = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> numar;

        maxim = 0;

        while (numar != 0)
        {
            cifra = numar % 10;

            if (cifra > maxim)
            {
                maxim = cifra;
            }

            numar /= 10;
        }
        if (maxim % 2 == 1)
        {
            k++;
        }

    }

    cout << k;

    return 0;
}
