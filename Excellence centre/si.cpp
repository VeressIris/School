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
    int c = 5; //101 &
    int a = 9; //110

    int x = a & c;
    cout << x << '\n';
    baza2(x);

    return 0;
}
