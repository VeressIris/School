//Se dau 4 nr int [a, b] [c, d]. Se cere [a, b] n [c, d]

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;

    cout << "[" << a << ", " << b << "] = ";

    if (d < a || b < c)
    {
        cout << "multimea vida";
    }
    else if (a <= c && b  <= d)
    {
        cout << "[" << c << ", " << b << "]";
    }
    else if (a <= c && b  >= d)
    {
        cout << "[" << c << ", " << d << "]";
    }
    else if (a >= c && b  <= d)
    {
        cout << "[" << a << ", " << b << "]";
    }
    else if (a >= c && b  >= d)
    {
        cout << "[" << a << ", " << d << "]";
    }

    return 0;
}
