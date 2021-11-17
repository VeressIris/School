#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;

    int minim = a;
    if (minim > b)
    {
        minim = b;
    }
    if (minim > c)
    {
        minim = c;
    }
    if (minim > d)
    {
        minim = d;
    }

    int maxim = a;
    if (maxim < b)
    {
        maxim = b;
    }
    if (maxim < c)
    {
        maxim = c;
    }
    if (maxim < d)
    {
        maxim = d;
    }
    
    cout << "[" << minim << ", " << maxim << "]";
    
    return 0;
}