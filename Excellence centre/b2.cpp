//a) cati biti de 1
//b) lungimea vectorului

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int b2[100];
    int i = 0;

    while (n != 0)
    {
        b2[i++] = n % 2;
        n /= 2;
    }

    int l = i;
    int k = 0;

    for (i--; i >= 0; i--)
    {
        cout << b2[i];

        if (b2[i] == 1)
        {
            k++;
        }
    }

    cout << '\n' << "total biti: " << l << '\n' << "biti de 1: " << k;

    return 0;
}
