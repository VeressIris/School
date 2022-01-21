// Se dau n nr naturale. afisati suma celor care NU sunt prime

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numar;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> numar;

        if (numar == 1)
        {
            sum += i;
        }

        for (int j = 2; j * j <= numar; j++)
        {
            if (numar % j == 0)
            {
                sum += i;
                break;
            }
        }
    }

    cout << sum;

    return 0;
}
