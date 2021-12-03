#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int MAX = -1000000;

    if (n == 0)
    {
        cout << "NU EXISTA";
    }
    else
    {
        while (n != 0)
        {
            cin >> n;

            if (n == 0)
            {
                break;
            }

            else
            {
                if (MAX < n)
                {
                    MAX = n;
                }
            }
        }

        cout << MAX;
    }

    return 0;
}
