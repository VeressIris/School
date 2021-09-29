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
    
    cout << minim;
    return 0;
}