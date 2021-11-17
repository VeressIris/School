//Scrieți un program care citește un număr natural n și care să calculeze și să afișeze suma S a tuturor numerelor obținute prin rearanjarea
//cifrelor lui n. Numărul n are toate cifrele distincte.

#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int count = 0;
    int sumaCifre = 0;
    int sumPuteri10 = 0;
    long long int factorial = 1;

    while (n != 0)
    {
        sumaCifre += n % 10;
        n /= 10;
        sumPuteri10 = sumPuteri10 * 10 + 1;
        if (count > 0)
        {
            factorial *= count;
        }
        count++;
    }

    cout << factorial * sumaCifre * sumPuteri10;

    return 0;
}