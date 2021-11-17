#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    do
    {
        sum += n % 10;
        n/=10;
    }
    while (n != 0);

    cout << sum;

    return 0;
}
