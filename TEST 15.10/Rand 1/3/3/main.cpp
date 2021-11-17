#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    float x;

    if (a != 0)
    {
        cout << -1.0 * b/a;
    }
    else if (b==0)
    {
        cout << "infinitate de solutii";
    }
    else
    {
        cout << "nu avem solutii";
    }

    return 0;
}
