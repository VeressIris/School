#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;

    int s1 = a / 10 + a % 10;
    int s2 = b / 10 + b % 10;
    int s3 = c / 10 + c % 10;

    int m = s1;

    if (s2 > m)
    {
        m = s2;
    }

    if (s3 > m)
    {
        m = s3;
    }

    if (s1 == m)
    {
        cout << a << ' ';
    }

    if (s2 == m)
    {
        cout << b << ' ';
    }

    if (s3 == m)
    {
        cout << c << ' ';
    }
    
    return 0;
}