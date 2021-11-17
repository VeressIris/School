#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;

    int prod = 1;
    int check = 0;
    while (n != 0)
    {
        if (n % 10 != k)
        {
            check = 1;
            prod *= n % 10;
        }
        n /= 10;
    }

    if (check == 1)
    {
        cout << prod;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
