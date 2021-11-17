#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    int v[n];
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    i = 0;

    int j = n - 1;
    //1. afisare:
    while (i < j)
    {
        cout << v[i] << ' ' << v[j] << ' ';
        i++;
        j--;
    }
    if (i == j)
    {
        cout << v[i];
    }

    //2. construire (nu afiseaza ultimul element):
//    int u [100];
//    int k = 0;
//    while (i < j)
//    {
//        u[k++] = v[i++];
//        u[k++] = v[j--];
//    }
//    for (j = 0; j < k; j++)
//    {
//        cout << u[j] << ' ';
//    }

    return 0;
}
