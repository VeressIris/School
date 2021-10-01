#include <iostream>

using namespace std;

int main()
{
    int S;
    int c;
    int n;
    cin >> S >> c >> n;

    if(S%c == 0)
    {
        if(S%n == 0)
        {
            cout << "CN";
        }
        else
            cout << "C";
    }
    else
        if(S%n == 0)
        {
            cout << "N";
        }
        else
        {
            cout << "nimic";
        }
    return 0;
}
