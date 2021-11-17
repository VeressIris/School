#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = (n/100)%10;
    int z = n%10;
    
    int a = x*10 + z;
    cout << a * a;
    return 0;
}
