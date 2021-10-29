//Scrieți un program care citește un număr natural nenul n și care calculează suma S tuturor numerelor distincte prefixe pentru n.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int S = n;

    while(n)
    {
        n /= 10;
        S += n;
    }
    cout << S;

    return 0;
}