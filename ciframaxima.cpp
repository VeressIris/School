#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cifra = n % 10;
    int maxim = cifra;
    while (n != 0)
    {
        cifra = n % 10;

        if (cifra > maxim)
        {
            maxim = cifra;
        }

        n /= 10;
    }

    cout << maxim;

    return 0;
}
