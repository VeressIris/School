//Se citesc N puncte. aflati care punct est cel mai aproape de origine, afisati coordonatele lui

#include <iostream>
#include <math.h>
#include <climits>

using namespace std;

struct punct
{
    float ox;
    float oy;
};

int main()
{
    int n;
    cin >> n;

    punct P[n];

    for (int i = 0; i < n; i++)
    {
        cin >> P[i].ox >> P[i].oy;
    }

    punct cmma;
    int d;
    int dmin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        d = sqrt(P[i].ox * P[i].ox + P[i].oy * P[i].oy);

        if (d < dmin)
        {
            cmma.ox = P[i].ox;
            cmma.oy = P[i].oy;
            dmin = d;
        }

    }

    cout << "Coordonatele punctului cel mai aproape de origine sunt: " << cmma.ox << ' ' << cmma.oy;

    return 0;
}

