#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = (n/100)%10;
    int z = n%10;

    int P = x * z;
    cout << P;

    return 0;
}
