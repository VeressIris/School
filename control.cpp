//Pentru un număr citit, să se determine cifra de control.

#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum;
    int cif;
    cin >> n;

    while (n / 10 != 0)
    {
        sum = 0;
        while (n != 0)
        {
            cif = n % 10;
            sum += cif;
            n /= 10;
        }
        n = sum;
    }

    cout << n;

    return 0;
}
