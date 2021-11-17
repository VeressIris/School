//Se citesc n nr naturale. Determinati cmmdc al lor.

#include <iostream>
#include "functie prim.cpp"

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a;
    int b;
    cin >> a >> b;

    b = cmmdc(a, b)

    for (int i = 0; i < n - 2; i++)
    {
        cin >> a;
        b = cmmdc(a, b);
    }
    cout << b;

    return 0;
}
