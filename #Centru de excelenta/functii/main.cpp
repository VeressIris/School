//Se citesc n nr naturale. Sa se determine cate din ele sunt prime

#include <iostream>
#include "functie prim.cpp"

using namespace std;

int main()
{
    int n;
    cin >> n;

    int val;
    int k = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> val;
        if (e_prim(val) == 1)
        {
            k++;
        }
    }
    cout << k;

    return 0;
}
