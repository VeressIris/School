#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int sum = 0;
    int c = 0;

    while (n != 0)
    {
        sum += n;
        c++;
        cin >> n;
    }

    float ma = sum * 1.0 / c * 1.0;

    int teza;
    cin >> teza;
    
    float medie = (ma * 3 + teza) / 4;
    cout << medie;

    return 0;
}