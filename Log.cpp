//Se dau numerele n și m. Să se determine exponentul la care se ridică n pentru a obține m.

#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;

    int x = 0;

    while (m > 1)
    {
        m /= n;
        x++;
    }

    cout << x;

    return 0;
}
