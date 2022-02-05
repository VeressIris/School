//se dau N intervale aflati intersectia lor

#include <iostream>
#include <climits>

using namespace std;

struct interval
{
    int a;
    int b;
};

int main()
{
    int n;
    cin >> n;

    interval I[n];
    interval intersectie = {INT_MIN, INT_MAX};

    for (int i = 0; i < n; i++)
    {
        cin >> I[i].a >> I[i].b;

        if (I[i].a > intersectie.a)
        {
            intersectie.a = I[i].a;
        }
        if (I[i].b < intersectie.b)
        {
            intersectie.b = I[i].b;
        }
    }

    cout << "[" << intersectie.a << ", " << intersectie.b << "]";

    return 0;
}
