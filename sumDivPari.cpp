// se citeste x, afisati suma divizorilor pari

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int sum = 0;

    for (int i = 2; i <= x; i++)
    {
        if (x % i == 0 && i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << sum;

    return 0;
}
