//Se citesc 2 puncte. aflati care punct est cel mai aproape de origine

#include <iostream>
#include <math.h>

using namespace std;

struct punct
{
    float ox;
    float oy;
};

int main()
{
    punct A;
    punct B;
    cin >> A.ox >> A.oy >> B.ox >> B.oy;

    int dA = sqrt(A.ox * A.ox + A.oy * A.oy); //distanta lui A de la origine
    int dB = sqrt(B.ox * B.ox + B.oy * B.oy); //distanta lui B de la origine

    if (dA < dB)
    {
        cout << "A(" << A.ox << ", " << A.oy << ") este mai aproape de origine";
    }
    else if (dB < dA)
    {
        cout << "B(" << B.ox << ", " << B.oy << ") este mai aproape de origine";
    }
    else
    {
        cout << "A(" << A.ox << ", " << A.oy << ") si B(" << B.ox << ", " << B.oy << ") sunt la fel de departe de origine";
    }

    return 0;
}
