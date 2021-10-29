//Se dau două numere naturale. Dacă cele două numere au acelaşi număr de cifre, să se afle pe câte poziţii aceste cifre coincid.
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    int count = 0;
    do
    {
        if ((a % 10) == (b % 10))
        {
            count++;
        }

        a /= 10;
        b /= 10;
    } 
    while (a != 0 && b != 0);

    if (a == 0 && b == 0) 
    {
        cout << "DA" << endl;
        cout << count;
    } 
    else 
    {
        cout << "NU" << endl;
    }

    return 0;
}