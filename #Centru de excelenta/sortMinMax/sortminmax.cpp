// Să se ordoneze crescător elementele dintr-un şir dat cuprinse între elementul de valoare maximă şi cel de valoare minimă.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int iMin = 0;
    int iMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[iMin])
        {
            iMin = i;
        }
        else if (arr[i] > arr[iMax])
        {
            iMax = i;
        }
    }

    if (iMax < iMin)
    {
        swap(arr[iMax], arr[iMin]);
        swap(iMax, iMin);
    }
    iMin++;

    bool gata = false;
    int k = 1;
    while (gata != true)    //echivalent cu !gata a se citi not gata
    {
        gata = true;
        for (int i = iMin; i < iMax - k; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                gata = false;
            }
        }
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}