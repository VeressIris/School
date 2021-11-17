#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int x = (a/100)%10;
    int y = (a/10)%10;
    int z = a%10;

    if(x == y && y == z)
    {
        cout << "da";
    }
    else
    {
        cout << "nu";
    }
    return 0;
}
