//Se dau două numere naturale nenule n și p. Afișați în ordine crescătoare puterile lui n mai mici sau egale cu p.

#include <iostream>

using namespace std;

int main()
{
    int n;
    int p;
    cin >> n >> p;

    cout << 1 << " ";
    if (p > 1) 
    {
        int power = n;
        while (power <= p)
        {
            cout << power << " ";
            power *= n;
        }  
    }
    
    return 0;
}
