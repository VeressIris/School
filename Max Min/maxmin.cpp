#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;

    int minim = a;
    if(minim > b)
    {
        minim=b;
    }
    if(minim > c)
    {
        minim=c;
    }

    int maxim = a;
    if(maxim < b)
    {
        maxim=b;
    }
    if(maxim < c)
    {
        maxim = c;
    }
    
    int mm = maxim - minim;
    cout << mm;

    return 0;
}