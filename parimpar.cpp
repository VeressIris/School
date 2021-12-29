#include <iostream>

using namespace std;

int ParImpar(int n)
{
    int nrNou = 0;
    int paritate = n % 10;
    int cif;
    int k = 1;
    
    while (n != 0)
    {
        cif = n % 10;

        if (paritate % 2 == n % 2) //avoids using if and else
        {
            nrNou = nrNou + cif * k;
            k *= 10;
        }

        n /= 10;
    }

    return nrNou;
}

int main()
{
    int a;
    int b;
    cin >> a >> b;

    if (ParImpar(a) > ParImpar(b))
    {
        cout << a;
    }
    else if (ParImpar(a) < ParImpar(b))
    {
        cout << b;
    }
    else if (a > b)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }

    return 0;
}
