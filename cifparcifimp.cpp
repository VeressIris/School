#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int nr;
    int cif;
    int imp = 0;
    int par = 0;


    for (int i = 0; i < n; i++)
    {
        cin >> nr;

        if (nr == 0)
        {
            par++;
        }
        else
        {
            while (nr != 0)
            {
                cif = nr % 10;

                if (cif % 2 == 0)
                {
                    par++;
                }
                else
                {
                    imp++;
                }

                nr /= 10;
            }
        }

    }

    cout << par << " " << imp;

    return 0;
}
