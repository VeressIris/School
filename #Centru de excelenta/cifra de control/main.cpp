#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int s = 0;

    do
    {
        while (n)
        {
            s += n % 10;
            n = n / 10;
        }
        n = s;
        s = 0;
    }
    while (n > 9);

    cout << n;

    return 0;
}
