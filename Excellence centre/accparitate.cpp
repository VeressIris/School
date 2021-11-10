//Se dau n numere întregi. Să se insereze între oricare două numere de aceeași paritate media lor aritmetică.

#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int arr[n];
   
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res[2 * n - 1];
    res[0] = arr[0];

    int j = 0;

    for (int i = 1; i < n; i++)
    {
        if ((arr[i - 1] + arr[i]) % 2 == 0)
        {
            res[++j] = (arr[i - 1] + arr[i]) / 2;
        }
        res[++j] = arr[i];
    }  

    for (int i = 0; i <= j; i++)
    {
        cout << res[i] << ' ';
    }
    
    return 0;
}