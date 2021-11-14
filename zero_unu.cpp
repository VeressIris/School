//Se dă un număr natural n. Să se verifice dacă n conține cel puțin o cifră de 1, cel puțin o cifră 0 și nu conține alte cifre.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool check_1 = false;
    bool check_0 = false;
    bool check_alt = false;
    int cifra;
    while (n != 0)
    {
        cifra = n % 10;

        if (cifra != 1 && cifra != 0)
        {
            check_alt = false;
            check_0 = false;
            check_1 = false;
            break;
        }
        else if (cifra == 1)
        {
            check_1 = true;
        }
        else if (cifra == 0)
        {
            check_0 = true;
        }

        n /= 10;
    }

    if (check_1 == true && check_0 == true && check_alt == false)
    {
        cout << "da";
    }
    else
    {
        cout << "nu";
    }

    return 0;
}
