#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cladiri[n];
    for (int i = 0; i < n; i++)
    {
        cin >> cladiri[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cladiri[i] < cladiri[j])
            {
                swap(cladiri[i], cladiri[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << cladiri[i] << ' ';
    }

    return 0;
}
