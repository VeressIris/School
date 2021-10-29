//Să se scrie un program care să determine ultima cifră pară a unui număr natural citit de la tastatură.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cifra = 0;

    bool ok = 0;

    if (n == 0)
    {
        cout << n;
        ok = 1;
    }

    while (n)
    {
        cifra = n % 10;
        if (cifra % 2 == 0)
        {
            cout << cifra;
            ok = 1;
            break;
        }
        n /= 10;
    }
    
    if (!ok)
    {
        cout << -1;
    }

    return 0;
}
