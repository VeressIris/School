//Să se scrie un program care să determine oglinditul unui număr natural citit de la tastatură.
// Oglinditul unui număr este numărul scris cu cifrele numărului dat în ordine inversă.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int oglindit = 0;

    while (n)
    {
        oglindit = oglindit * 10 + n % 10;
        n /= 10;
    }

    cout << oglindit;

    return 0;
}