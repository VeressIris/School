#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool gata = 1;
    int k = 1;
    while (gata != 0)
    {
        for (int i = 0; i < n - k; i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                gata = 0;
            }
        }
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}
