#include <iostream>

using namespace std;

int main()
{
    int B;
    int S;

    cin >> B >> S;

    int C = S/B;
    int P = B-S%B;

    cout << C << " " << P;

    return 0;
}