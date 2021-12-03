#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;

    long long int S = 0;

    for (int i = 1; i <= n; i++)
    {
        S += i * (i + 1);
    }

    cout << "Rezultatul este " << S;

    return 0;
}
