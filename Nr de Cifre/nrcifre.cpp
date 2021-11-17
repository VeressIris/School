#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int nr_cifre = 0;

    do
    {
        nr_cifre++;
        n /= 10;
    } while (n != 0);

    cout << nr_cifre;

    return 0;
}