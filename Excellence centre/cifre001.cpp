//Se dau două numere naturale. Dacă cele două numere au acelaşi număr de cifre, să se afle pe câte poziţii aceste cifre coincid.
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    int tempA = a; 
    int tempB = b; 
    int countA = 0; 
    int countB = 0;

    while (tempA != 0) 
    {
        tempA /= 10;
        countA++;
    }

    while (tempB != 0)
    {
        tempB /= 10;
        countB++;
    }

    int cifA = 0;
    int cifB = 0;
    bool ok = 0;
    int count = 0;

    if (countA == countB)
    {
        if (a == 0 && b == 0) 
        {
            cout << "DA" << '\n' << 1;
        }
        else
        {
            while (a && b)
            {
                cifA = a % 10;
                a /= 10;
                cifB = b % 10;
                b /= 10;
                if (cifA == cifB)
                {
                    ok = 1;
                    count++;
                }
            }

            if (ok == 1)
            {
                cout << "DA" << '\n' << count;
            }
            else
            {
                cout << "DA" << '\n' << count;
            }
        }
    }
    else
    {
        cout << "NU";
    }

    return 0;
}