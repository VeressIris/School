//Se dă un vector cu n elemente, numere naturale și un număr k. Ordonați crescător primele k elemente ale vectorului și descrescător ultimele n-k elemente.

#include <iostream>

using namespace std;

void ascInsertionSort (int arr[], int n)
{
    int curr_element;

    for (int i = 1; i < n; i++)
    {
        curr_element = arr[i];

        int j = i - 1;

        while (j >= 0 && arr[j] > curr_element)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }

        arr[j + 1] = curr_element;
    }
}

void descInsertionSort (int arr[], int start, int n)
{
    int curr_element;

    for (int i = start; i < n; i++)
    {
        curr_element = arr[i];

        int j = i - 1;

        while (j >= start && arr[j] < curr_element)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }

        arr[j + 1] = curr_element;
    }
}

int main ()
{
    int n;
    int k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ascInsertionSort(arr, k);
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << ' ';
    }

    descInsertionSort(arr, k, n);
    for (int i = k; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}