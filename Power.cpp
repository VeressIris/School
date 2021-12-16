#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    if (b == 0)
    {
        cout << 1;
    }
    else
    {
        int P = a;
        for (int i = 1; i < b; i++)
        {
            P *= a;
        }

        cout << P;
    }
    
    return 0;
}
