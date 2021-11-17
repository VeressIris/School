#include <iostream>

using namespace std;

int main()
{
    char N[100];
    cin >> N;

    int n = 0;

    while(N[n] != 0)
    {
        n++;
    }

    int M[100] ={0};
    int j = n - 1;
    int i = 0;
    for (j = n - 1; j >= 0; j--)
    {
        M[i++] = N[j] - '0';
    }

    for (i = 0; i < n; i++)
    {
        cout << M[i];
    }

    return 0;
}
