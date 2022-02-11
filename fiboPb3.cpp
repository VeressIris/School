//Se citeste k. Afisati cel de-al k-lea termen impar din sirul lui Fibo

#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;

    int t1 = 1;
    int t2 = 1;
    int t3;

    if (k <= 2)
    {
        cout << 1;
    }
    else
    {
        for (int i = 3; ;i++)
        {
            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;

            if (i == k + 2)
            {
                cout << t3;
                break;
            }
        }
    }

    return 0;
}
