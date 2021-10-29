//Fiind dat un număr natural n înlocuiți toate aparițiile cifrei c1 din numărul n cu cifra c2.

#include <iostream>

using namespace std;

int main()
{
    int n;
    int c1;
    int c2;
    cin >> n >> c1 >> c2;     

    int numar = 0;
    int zeci = 1;

    do
    {
        if (n % 10 == c1)
        {
            numar = numar + c2 * zeci;
        }
        else
        {
            numar = numar + (n % 10) * zeci;
        }
        zeci *= 10;
        n /= 10;
    }
    while (n != 0);

    cout << numar;
    
    return 0;
}