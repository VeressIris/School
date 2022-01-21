// se citeste a si b. afisati divizorii proprii comuni

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i << ' ';
        }
    }

    return 0;
}
