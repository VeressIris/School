#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    int x = a - b;
    if(a > b)
    {
        cout << "Primul copil este mai mare cu " << x << " ani";
    }
    if(b > a)
    {
        cout << "Al doilea copil este mai mare cu " << x * -1 << " ani";
    }
    if(x==0)
    {
        cout << "Copiii au varste egale";
    }
    return 0;
}