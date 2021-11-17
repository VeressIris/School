//Enunt: Se dau 4 numere intregi a, b, c, d care sunt capetele intervalelor inchise [a,b], respectiv [c,d]. 
//Determinati intersectia celor 2 intervale.

#include <iostream>

using namespace std;

int main ()
{
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;

    int minim;
    int maxim;

    if (a > c)
    {
        minim = a;
    }
    else
    {
        minim = c;
    }

    if (b > d)
    {
        maxim = b;
    }
    else
    {
        maxim = d;
    }
    cout << maxim << minim;

    return 0;
}
