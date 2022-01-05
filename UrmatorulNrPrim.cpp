//... sa se afiseze si urmatorul numar prim

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;
    int div = 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << i << ' ';
            div = 1;
        }
    }

    int prim = 0;

    if (div == 0)
    {
        i = n + 1;

        while (prim == 0)
        {
            div = 0;

            for (int j = 2;  j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    div = 1;
                    break;
                }
            }

            if (div == 0)
            {
                cout << i;
                prim = 1;
            }
            else
            {
                i++;
            }
        }
    }

    return 0;
}
