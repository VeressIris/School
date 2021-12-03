//Să se scrie un program care citește numărul natural n și determină suma S=1^1+2^2+ ... + n^n .

#include <iostream>

using namespace std;

long long int putere(int baza, int exponent)
{
    long long int ans = 1;

    for (int i = 0; i < exponent; i++)
    {
        ans *= baza;
    }

    return ans;
}   

int main()
{
    int n;
    cin >> n;

    long long int S = 0;

    for (int i = 1; i <= n; i++)
    {
        S += putere(i, i);
    }

    cout << "Rezultatul este " << S;

    return 0;
}