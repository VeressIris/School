//Se citește numărul natural n. Să se determine exponentul maxim e cu proprietatea că 2^e ≤ n.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{   
    int n;
    cin >> n;

    int e = 0;

    while (pow(2, e) <= n)
    {
        e++;
    }

    cout << e - 1;

    return 0;
}
