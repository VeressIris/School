//Se dă numărul natural nenul n. Să se determine produsul primelor n numere impare.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int prod = 1;

    for (int i = 1; i <= n * 2; i+=2)
    {
        prod *= i;
    }

    cout << prod;

    return 0;
}
