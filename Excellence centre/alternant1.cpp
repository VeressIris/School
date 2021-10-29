//Se dă un număr natural n. Să se verifice dacă este sau nu alternant. (ex: 8165 - DA)

#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    bool ok = 0;

    while (n > 9)
    {
        if ((n % 10) % 2 == ((n / 10) % 10) % 2)
        {
            ok = 1;
        }
        n /= 10;
    }

    if (ok == 0)
    {
        cout << "da";
    }
    else
    {
        cout << "nu";
    }
    return 0;
}