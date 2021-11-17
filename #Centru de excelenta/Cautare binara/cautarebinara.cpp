//Se dă un vector x cu n elemente numere naturale, ordonate crescător, și un vector y cu m elemente, de asemenea numere naturale.
//Verificați pentru fiecare element al vectorului y dacă apare în x.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    
    int m;
    cin >> m;
    int y[m];
    int c[m];
    for (int i = 0; i < m; i++)
    {
        cin >> y[i];
        c[i] = 0;
    }

    int index;
    for (int i = 0; i < m; i++)
    {
        int inceput = 0;
        int sfarsit = n - 1;
        do
        {
            index = (inceput + sfarsit) / 2;
            if (y[i] == x[index])
            {
                c[i] = 1;
                break;
            }
            else if (x[index] < y[i])
            {
                inceput = index + 1;
            }
            else
            {
                sfarsit = index - 1;
            }
        }
        while (inceput <= sfarsit);
    }

    for (int i = 0; i < m; i++)
    {
        cout << c[i] << ' ';
    }
    
    return 0;
}