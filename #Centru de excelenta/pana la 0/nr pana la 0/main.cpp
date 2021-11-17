//Se citesc n numere pana la intalnirea lui 0. Detereminati minimul si maximul dintre numerele citite (fara 0)

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int mini;
    int maxi;
    mini = maxi = n;

    while (n)
    {
        if (n < mini)
        {
            mini = n;
        }
        else if (n > maxi)
        {
            maxi = n;
        }
        cin >> n;
    }

    cout << mini << '\n' << maxi;

    return 0;
}
