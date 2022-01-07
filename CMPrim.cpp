//se citesc n nr calculati cel mai mare nr prim citit

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numar;
    cin >> numar;
    int CMPrim = numar;

    for (int i = 2; i <= n; i++)
    {
        cin >> numar;
        if (CMPrim < numar)
        {
            CMPrim = numar;
        }
    }
    cout << CMPrim;
  
    return 0;
}
