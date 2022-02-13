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
    int a = 1;
    int b = 3;
    int c = 5;

    baza2(a); //1
    baza2(b); //11
    baza2(c); //101

    cout << '\n';

    int x = c << 3; //left shift - inmultirea repetata cu 2
    cout << x << '\n';
    baza2(x);

    x = x >> 3; //right shift - impartirea repetata cu 2
    cout << x << '\n';
    baza2(x);

    cout << '\n';

    x = a << 31;
    cout << x << '\n';
    baza2(x);

    return 0;
}
