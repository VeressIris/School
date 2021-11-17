#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    char simbol;
    cin >> A >> B;
    cin >> simbol;

    int R;

    if (simbol == '+')
    {
        R = A + B;
        cout << R;
    }

    if (simbol == '-')
    {
        if ( A > B)
        {
            R = A - B;
            cout << R;
        }
        else
        {
            R = B - A;
            cout << R;
        }
    }
    
    if (simbol == '*')
    {
        R = A * B;
        cout << R;
    }

    if(simbol == '/')
    {
        if (A > B)
        {
            R = A / B;
            cout << R;
        }
        else
        {
            R = B / A;
            cout << R;
        }
        
    }

    return 0;
}