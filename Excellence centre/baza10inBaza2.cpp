//afisare in baza 2

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int b2[100];
    int i = 0;

    while (n != 0)
    {
        b2[i++] = n % 2;
        n /= 2;
    }

    for (i--; i >= 0; i--)
    {
        cout << b2[i];
    }

    return 0;
}
