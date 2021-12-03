//Să se scrie un program care citește numărul natural n și determină suma S=1*2+2*3+3*4+...+n*(n+1).

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
