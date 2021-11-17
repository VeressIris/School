#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = (n/100)%10;
    int z = n%10;

    int m = x * 10 + z;
    cout << m;
    return 0;
}
