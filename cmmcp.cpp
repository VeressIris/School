#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    int cifra;
    int max_par = 0;
    bool par = false;

    do
    {
        cifra = n % 10;

        if (cifra % 2 == 0)
        {
            par = true;
            if (cifra > max_par)
            {
                max_par = cifra;
            }
        }

        n /= 10;
    }while (n != 0);

    if (par == false)
    {
        cout << 10;
    }
    else
    {
        cout << max_par;
    }

    return 0;
}
