//Se citesc x si y verificati daca sunt termeni alaturati in sirul lui Fibo

#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cin >> x >> y;

    int t1 = 1;
    int t2 = 1;
    int t3;

    bool ok = false;

    if (x <= 2 && y <= 2)
    {
        cout << "DA";
    }
    else
    {
        for (int i = 3; ;i++)
        {
            t3 = t1 + t2;

            if (t3 > max(x, y))
            {
                break;
            }

            t1 = t2;
            t2 = t3;

            if (t1 == x && t2 == y || t1 == y && t2 == x)
            {
                ok = true;
                break;
            }
        }

        if (ok == true)
        {
            cout << "DA";
        }
        else
        {
            cout << "NU";
        }
    }

    return 0;
}
