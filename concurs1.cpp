#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int n;
    cin >> a >> b >> n;

    if(n >= a && n <= b)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}
