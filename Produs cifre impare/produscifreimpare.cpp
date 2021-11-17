#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int prod = 1;
    bool impar = 0;

    if (n == 0)
    {
        prod = -1;
    }

    while (n != 0)
    {
        if ((n % 10) % 2 != 0)
        {
            impar = 1;
            prod *= n % 10;
        }
        n/=10;
    }

    if (impar == 0)
    {
        prod = -1;
    }
    cout << prod;

    return 0;
}
