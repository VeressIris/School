// se citeste un nr x. afisati divizorii impari

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0 && i % 2 != 0)
        {
            cout << i << ' ';
        }
    }

    return 0;
}
