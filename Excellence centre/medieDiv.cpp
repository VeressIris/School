//Se citeşte de la tastatură un număr natural n. Să se calculeze şi să se afişeze media aritmetică a tuturor divizorilor săi. 
//Media va fi cu fix 2 zecimale dupa virgula.

#include <iostream>
#include <iomanip> //setprecision(n) - n zecimale dupa virgula

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int sum = 0;
    int nrdiv = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            nrdiv++;
        }
    }

    double medie = sum * 1.0 / nrdiv ;  
    cout << fixed << setprecision(2) << medie;

    return 0;
}