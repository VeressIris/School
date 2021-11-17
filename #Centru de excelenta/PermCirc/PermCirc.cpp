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

    int iStart = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[(iStart + j) % n] << ' ';
        }
        iStart++;
        cout << endl;
    }

    return 0;
}