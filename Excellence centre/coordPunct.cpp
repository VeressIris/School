//Se citeste un punct, afisati coordonatul sau pe axe (cadran I, II, III, IV)

#include <iostream>

using namespace std;

struct punct
{
    float ox;
    float oy;
};

int main()
{
    punct A;
    cin >> A.ox >> A.oy;

    if (A.ox > 0 && A.oy > 0)
    {
        cout << "A(" << A.ox << ", " << A.oy << ") - cadranul I";
    }
    else if (A.ox < 0 && A.oy > 0)
    {
        cout << "A(" << A.ox << ", " << A.oy << ") - cadranul II";
    }
    else if (A.ox < 0 && A.oy < 0)
    {
        cout << "A(" << A.ox << ", " << A.oy << ") - cadranul III";
    }
    else
    {
        cout << "A(" << A.ox << ", " << A.oy << ") - cadranul IV";
    }

    return 0;
}
