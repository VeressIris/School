#include <iostream>

using namespace std;

void baza2(int n)
{
    int i = 0;
    int b2[100];

    while (n != 0)
    {
        b2[i++] = n % 2;
        n /= 2;
    }

    for (i--; i >= 0; i--)
    {
        cout << b2[i];
    }

    cout << '\n';
}

int main()
{
    int a = 123123123;
    //00000111 01010110 10110101 10110011
    //                                  1
    baza2(a);

    int bit = 1;
    int x;

    for (int i = 31; i > 0; i--)
    {
        x = 1 << i;

        if ((a & x) == 0)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }

    return 0;
}
