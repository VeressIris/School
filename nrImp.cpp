#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int div = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << ' ';
            div = 1;
        }
    }

    if (div == 0)
    {
        cout << "nr este prim";
    }

    return 0;
}
