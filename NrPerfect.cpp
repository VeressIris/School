//un nr este perfect daca dublul sau este egal cu suma divizorilor. Pt un nr citit, afisati "DA" daca
//este perfect sau "NU" in caz contrar.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (n * 2 == sum)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
