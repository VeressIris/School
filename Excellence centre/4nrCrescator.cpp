//Se citesc 4 nr int: a, b, c, d. Afisati numerele in ordine crescatoare

#include <iostream>

using namespace std;

int main()
{
    int A[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> A[i];
    }

    int temp;
    for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (A[i] > A[j])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
				//swap(A[i], A[j])
			}
		}
	}

    for (int i = 0; i < 4; i++)
    {
        cout << A[i] << ' ';
    }

    return 0;
}
