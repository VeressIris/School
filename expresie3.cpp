#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int S = 0;

    for (int i = 1; i <= n; i+=2)
    {
        S += i * (i + 1);
    }

    for (int i = 2; i <= n; i+=2)
    {
        S -= i * (i + 1);
    }

    cout << "Rezultatul este " << S;

    return 0;
}
