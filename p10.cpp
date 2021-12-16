//Se dă n. Să se afișeze 10n.

#include <iostream>

using namespace std;

void pow10(int n)
{
    cout << '1';
    while(n!=0)
    {
        n--;
        cout << '0';
    }
}

int main()
{
    int n;
    cin >> n;
    pow10(n);

return 0;
}
