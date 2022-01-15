//Să se scrie un program care citește numărul natural n și determină suma primelor n pătrate perfecte nenule.

#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n * n; i++)
    {
        //daca partea intreaga de sqrt(i) e egala cu sqrt(i) atunci e pp
        int parteIntreaga = (int)sqrt(i);
        if (parteIntreaga == sqrt(i))
        {
            sum += i;
        }
    }

    cout << "Rezultatul este " << sum;

    return 0;
}