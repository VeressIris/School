/**
Enunt:
Se dau 4 numere intregi a, b, c, d care sunt capetele intervalelor inchise [a,b],
respectiv [c,d].
Determinati intersectia celor 2 intervale.
*/

#include <iostream>

using namespace std;

int main ()
{
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;

    int x = a + c;
    int y = b + d;

    x -= min(a,c);
    y -= max(b,d);

    cout << "[" << x << ", " << y << "]";
    return 0;
}
