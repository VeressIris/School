#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int max_impar = 0;
    int cifra;
    bool impar = false;
    do
    {
        cifra = n % 10;

        if (cifra % 2 == 1)
        {
            impar = true;
            if (cifra > max_impar)
            {
                max_impar = cifra;
            }
        }

        n /= 10;
    } while (n != 0);

    if (impar == false)
    {
        cout << "nu exista";
    }
    else
    {
        cout << max_impar;
    }

    return 0;
}
