//Se dau două mulțimi de numere naturale. Să se afișeze reuniunea și intersecția lor.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int reuniune[n + m];
    int intersectie[m + m];
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    while (i < n || j < m)
    {
        if (i == n)
        {
            reuniune[k++] = arr2[j++];
        }
        else if (j == m)
        {
            reuniune[k++] = arr1[i++];
        }
        else
        {
            if (arr1[i] < arr2[j])
            {
                reuniune[k++] = arr1[i++];
            }
            else if (arr1[i] > arr2[j])
            {
                reuniune[k++] = arr2[j++];
            }
            else
            {
                intersectie[l++] = arr1[i++];
                reuniune[k++] = arr2[j++];
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << reuniune[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < l; i++)
    {
        cout << intersectie[i] << ' ';
    }

    return 0;
}